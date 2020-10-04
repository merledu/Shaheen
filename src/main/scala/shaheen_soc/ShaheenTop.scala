package shaheen_soc
import chisel3._
import _root_.core.Core
import merl.uit.tilelink.{TLConfiguration, TL_H2D, TL_HostAdapter, TL_RegAdapter, TL_SramAdapter}
import primitives.{DataMem, InstMem}

class ShaheenTop(implicit val conf: TLConfiguration) extends Module {
  val io = IO(new Bundle {
    val dummy = Output(SInt(32.W))  // just a dummy output
  })
  val core = Module(new Core())
  val iccm = Module(new InstMem())
  val dccm = Module(new DataMem())
  val core_iccm_tl_host = Module(new TL_HostAdapter())
  val core_dccm_tl_host = Module(new TL_HostAdapter())
  val iccm_tl_device = Module(new TL_SramAdapter(sramAw = 14, sramDw = 32, forFetch = true.B))
  val dccm_tl_device = Module(new TL_SramAdapter(sramAw = 14, sramDw = 32))

  /** |||||||||||| CORE -> TL_HOST ADAPTER -> TL_DEVICE ADAPTER -> ICCM |||||||||||| */
  /** |||||||||||| ICCM -> TL_DEVICE ADAPTER -> TL_HOST ADAPTER -> CORE |||||||||||| */
  core_iccm_tl_host.io.req_i := core.io.instr_req_o
  core_iccm_tl_host.io.addr_i := core.io.instr_addr_o
  core_iccm_tl_host.io.we_i := false.B
  core_iccm_tl_host.io.wdata_i := 0.U
  core_iccm_tl_host.io.be_i := "b1111".U

  iccm_tl_device.io.tl_i <> core_iccm_tl_host.io.tl_o
  core_iccm_tl_host.io.tl_i <> iccm_tl_device.io.tl_o

  iccm.io.instr_addr_i := iccm_tl_device.io.addr_o >> 2
  iccm_tl_device.io.rdata_i := iccm.io.instr_rdata_o

  core.io.instr_rdata_i := core_iccm_tl_host.io.rdata_o
  core.io.instr_gnt_i := core_iccm_tl_host.io.gnt_o
  core.io.instr_rvalid_i := core_iccm_tl_host.io.valid_o

  /** |||||||||||| CORE -> TL_HOST ADAPTER -> TL_DEVICE ADAPTER -> DCCM |||||||||||| */
  /** |||||||||||| DCCM -> TL_DEVICE ADAPTER -> TL_HOST ADAPTER -> CORE |||||||||||| */
  core_dccm_tl_host.io.req_i := core.io.data_req_o
  core_dccm_tl_host.io.addr_i := core.io.data_addr_o.asUInt()
  core_dccm_tl_host.io.we_i := core.io.data_we_o
  core_dccm_tl_host.io.wdata_i := core.io.data_wdata_o.asUInt()
  core_dccm_tl_host.io.be_i := core.io.data_be_o

  dccm_tl_device.io.tl_i <> core_dccm_tl_host.io.tl_o
  core_dccm_tl_host.io.tl_i <> dccm_tl_device.io.tl_o
  dccm_tl_device.io.rdata_i := dccm.io.rdata_o

  dccm.io.addr_i := dccm_tl_device.io.addr_o >> 2
  dccm.io.wdata_i := dccm_tl_device.io.wdata_o
  dccm.io.we_i := dccm_tl_device.io.we_o
  dccm.io.mask_i := dccm_tl_device.io.wmask_o

  core.io.data_gnt_i := core_dccm_tl_host.io.gnt_o
  core.io.data_rvalid_i := core_dccm_tl_host.io.valid_o
  core.io.data_rdata_i := core_dccm_tl_host.io.rdata_o.asSInt()

  // dummy interface
  io.dummy := core.io.reg_out
}