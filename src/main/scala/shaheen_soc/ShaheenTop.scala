package shaheen_soc
import chisel3._
import _root_.core.Core
import merl.uit.tilelink.{TLConfiguration, TL_H2D, TL_HostAdapter, TL_RegAdapter}
import primitives.InstMem

class ShaheenTop(implicit val conf: TLConfiguration) extends Module {
  val io = IO(new Bundle {
    val dummy = Output(SInt(32.W))  // just a dummy output
  })
  val core = Module(new Core())
  val iccm = Module(new InstMem())
  val core_iccm_tl_host = Module(new TL_HostAdapter())
  val iccm_tl_device = Module(new TL_RegAdapter(14, 32, forSRAM = true.B)())

  core_iccm_tl_host.io.req_i := core.io.instr_req_o
  core_iccm_tl_host.io.addr_i := core.io.instr_addr_o
  core_iccm_tl_host.io.we_i := false.B
  core_iccm_tl_host.io.wdata_i := 0.U
  core_iccm_tl_host.io.be_i := "b1111".U

  iccm_tl_device.io.tl_i <> core_iccm_tl_host.io.tl_o
  core_iccm_tl_host.io.tl_i <> iccm_tl_device.io.tl_o

  iccm.io.instr_req_i := iccm_tl_device.io.re_o
  iccm.io.instr_addr_i := iccm_tl_device.io.addr_o >> 2
  iccm_tl_device.io.rdata_i := iccm.io.instr_rdata_o
  iccm_tl_device.io.error_i := false.B  // may get error from 1:N socket with address mishandling

  core.io.instr_rdata_i := core_iccm_tl_host.io.rdata_o
  core.io.instr_gnt_i := core_iccm_tl_host.io.gnt_o
  core.io.instr_rvalid_i := core_iccm_tl_host.io.valid_o

  core.io.data_gnt_i := false.B
  core.io.data_rvalid_i := false.B
  core.io.data_rdata_i := 0.S

  // dummy interface
  io.dummy := core.io.reg_out
}