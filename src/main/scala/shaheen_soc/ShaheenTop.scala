package shaheen_soc
import chisel3._
import chisel3.util.{Cat, Enum}
import _root_.core.Core
import merl.uit.tilelink.{TLConfiguration, TL_H2D, TL_HostAdapter, TL_RegAdapter, TL_SramAdapter}
import primitives.{DataMem, InstMem}
import uart0.UartController

class ShaheenTop(implicit val conf: TLConfiguration) extends Module {
  val io = IO(new Bundle {
    val rx_i = Input(UInt(1.W))
    val result = Output(SInt(4.W))  // output for testing on fpga
  })
  val uart_ctrl = Module(new UartController(8000000, 9600))
  val core = Module(new Core())
  val iccm = Module(new InstMem())
  val dccm = Module(new DataMem())
  val core_iccm_tl_host = Module(new TL_HostAdapter())
  val core_dccm_tl_host = Module(new TL_HostAdapter())
  val iccm_tl_device = Module(new TL_SramAdapter(sramAw = 14, sramDw = 32, forFetch = true.B))
  val dccm_tl_device = Module(new TL_SramAdapter(sramAw = 14, sramDw = 32))

  /** ||||||||||||||||||||||||||||||| INITIAL BOOT UP AFTER RESET ||||||||||||||||||||||||||||||| */
  val instr_we = Wire(Bool())
  val instr_wdata = Wire(UInt(32.W))
  val instr_addr = Wire(UInt(32.W))


  val rx_data_reg = RegInit(0.U(32.W))
  val rx_addr_reg = RegInit(0.U(32.W))
  val reset_reg = RegInit(true.B)

  uart_ctrl.io.rxd := io.rx_i
  val idle :: read_uart :: write_iccm :: prog_finish :: Nil = Enum(4)
  val state_reg = RegInit(idle)
  reset_reg := reset.asBool()
  // After reset checking also if uart_ctrl.done is false then only goto start_uart
  // uart_ctrl.done indicates that the program is fully received from the host
  // and it remains high for the complete lifecycle of the SoC.
  // Using it in the condition avoid the core to stall after every reset press.
  // the stall will only take place if the soc was never programmed.
  //state_reg := Mux(reset.asBool() === false.B && !uart_ctrl.io.done, read_uart, idle)

  when(state_reg === idle) {
    when(reset_reg === true.B && reset.asBool() === false.B) {
      state_reg := read_uart
    } .otherwise {
      state_reg := idle
    }
    instr_we := true.B  // active low
    instr_addr := iccm_tl_device.io.addr_o >> 2
    instr_wdata := DontCare
    core.io.stall_core_i := false.B
    uart_ctrl.io.isStalled := false.B
  } .elsewhen(state_reg === read_uart) {
      when(uart_ctrl.io.valid) {
      state_reg := write_iccm
    } .elsewhen(uart_ctrl.io.done) {
        // changed here now check on on fpga after synthesizing
      state_reg := prog_finish
    } .otherwise {
      state_reg := read_uart
    }
    instr_we := true.B  // active low
    instr_addr := DontCare
    instr_wdata := DontCare
    core.io.stall_core_i := true.B
    uart_ctrl.io.isStalled := true.B
    // checking if uart_ctrl.valid is high
    // this indicates that a 32 bit data from the host is ready to be written in memory.
    // otherwise checking if uart_ctrl.done is high indicating the program has ended
    // this time uart_ctrl.valid will not be high since we don't want to write that data in memory.
    // if both of them are not true we remain in the current state.
    //state_reg := Mux(uart_ctrl.io.valid, write_iccm, Mux(uart_ctrl.io.done, prog_finish, read_uart))
    // store data and addr in registers if uart_ctrl.valid is high to save it since going to next state i.e write_iccm
    // will take one more cycle which may make the received data and addr invalid since by then another data and addr
    // could be written inside it.
    rx_data_reg := Mux(uart_ctrl.io.valid, uart_ctrl.io.rx_data_o, 0.U)
    rx_addr_reg := Mux(uart_ctrl.io.valid, uart_ctrl.io.addr_o, 0.U)
  } .elsewhen(state_reg === write_iccm) {
    when(uart_ctrl.io.done) {
      state_reg := prog_finish
    } .otherwise {
      state_reg := read_uart
    }
    instr_we := false.B   // active low
    instr_wdata := rx_data_reg
    instr_addr := rx_addr_reg
    // keep stalling the core
    core.io.stall_core_i := true.B
    uart_ctrl.io.isStalled := true.B
    // 32 bit data ready to be written into memory
    //iccm.io.csb_i := false.B  // active low
    //iccm.io.we_i := false.B   // active low
    //iccm.io.wdata_i := rx_data_reg
    //iccm.io.addr_i := rx_addr_reg
    //state_reg := Mux(uart_ctrl.io.done, prog_finish, read_uart)
  } .elsewhen(state_reg === prog_finish) {
    instr_we := true.B   // active low
    instr_wdata := DontCare
    instr_addr := iccm_tl_device.io.addr_o >> 2
    core.io.stall_core_i := false.B
    uart_ctrl.io.isStalled := false.B
    state_reg := idle
  } .otherwise {
    instr_we := true.B   // active low
    instr_wdata := DontCare
    instr_addr := DontCare
    core.io.stall_core_i := DontCare
    uart_ctrl.io.isStalled := DontCare
  }

  /** |||||||||||| CORE -> TL_HOST ADAPTER -> TL_DEVICE ADAPTER -> ICCM |||||||||||| */
  /** |||||||||||| ICCM -> TL_DEVICE ADAPTER -> TL_HOST ADAPTER -> CORE |||||||||||| */
  core_iccm_tl_host.io.req_i := core.io.instr_req_o
  core_iccm_tl_host.io.addr_i := core.io.instr_addr_o
  core_iccm_tl_host.io.we_i := false.B
  core_iccm_tl_host.io.wdata_i := 0.U
  core_iccm_tl_host.io.be_i := "b1111".U

  iccm_tl_device.io.tl_i <> core_iccm_tl_host.io.tl_o
  core_iccm_tl_host.io.tl_i <> iccm_tl_device.io.tl_o

  iccm.io.csb_i := false.B  // active low
  iccm.io.we_i := instr_we
  iccm.io.addr_i := instr_addr
  iccm.io.wdata_i := instr_wdata
  iccm_tl_device.io.rdata_i := iccm.io.rdata_o

//  iccm.io.instr_addr_i := iccm_tl_device.io.addr_o >> 2
//  iccm_tl_device.io.rdata_i := iccm.io.instr_rdata_o

  core.io.instr_rdata_i := core_iccm_tl_host.io.rdata_o
  core.io.instr_gnt_i := core_iccm_tl_host.io.gnt_o
  core.io.instr_rvalid_i := core_iccm_tl_host.io.valid_o

  /** |||||||||||| CORE -> TL_HOST ADAPTER -> TL_DEVICE ADAPTER -> DCCM |||||||||||| */
  /** |||||||||||| DCCM -> TL_DEVICE ADAPTER -> TL_HOST ADAPTER -> CORE |||||||||||| */
  core_dccm_tl_host.io.req_i := core.io.data_req_o
  core_dccm_tl_host.io.addr_i := core.io.data_addr_o.asUInt()
  core_dccm_tl_host.io.we_i := core.io.data_we_o
  core_dccm_tl_host.io.wdata_i := core.io.data_wdata_o.asUInt()
  core_dccm_tl_host.io.be_i := Cat(core.io.data_be_o(3),core.io.data_be_o(2),core.io.data_be_o(1),core.io.data_be_o(0))

  dccm_tl_device.io.tl_i <> core_dccm_tl_host.io.tl_o
  core_dccm_tl_host.io.tl_i <> dccm_tl_device.io.tl_o
  dccm_tl_device.io.rdata_i := Cat(dccm.io.rdata_o(3),dccm.io.rdata_o(2),dccm.io.rdata_o(1),dccm.io.rdata_o(0))

  dccm.io.csb_i := false.B    // always enabling the memory (active low)
  dccm.io.addr_i := dccm_tl_device.io.addr_o >> 2

  dccm.io.wdata_i(0) := dccm_tl_device.io.wdata_o(7,0)
  dccm.io.wdata_i(1) := dccm_tl_device.io.wdata_o(15,8)
  dccm.io.wdata_i(2) := dccm_tl_device.io.wdata_o(23,16)
  dccm.io.wdata_i(3) := dccm_tl_device.io.wdata_o(31,24)
  dccm.io.we_i := ~dccm_tl_device.io.we_o   // inverting write enable because we_i is active low.
  dccm.io.wmask_i := dccm_tl_device.io.wmask_o

  core.io.data_gnt_i := core_dccm_tl_host.io.gnt_o
  core.io.data_rvalid_i := core_dccm_tl_host.io.valid_o
  core.io.data_rdata_i := core_dccm_tl_host.io.rdata_o.asSInt()

  // dummy interface
  io.result := core.io.reg_7(3,0).asSInt()
}