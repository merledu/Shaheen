package flash_ctrl
import chisel3._
import merl.uit.tilelink.{TLConfiguration, TL_D2H, TL_H2D}

class FlashCtrlRegTop(implicit val conf: TLConfiguration) extends Module {
  val io = IO(new Bundle {
    val tl_i = Flipped(new TL_H2D())
    val tl_o = new TL_D2H()
    // For window ports
    val tl_win_o = Vec(2, new TL_H2D())
    val tl_win_i = Vec(2, Flipped(new TL_D2H()))
    // To hardware peripheral logic
    val reg2hw = new FlashCtrlReg2Hw
    val hw2reg = new FlashCtrlHw2Reg
  })

  val AW = 8
  val DW = 32
  val DBW = DW/8

  val reg_we = Wire(Bool())
  val reg_re = Wire(Bool())
  val reg_addr = Wire(UInt(AW.W))
  val reg_wdata = Wire(UInt(DW.W))
  val reg_be = Wire(UInt(DBW.W))
  val reg_rdata = Wire(UInt(DW.W))
  val reg_error = Wire(Bool())

  val addrmiss, wr_err = Wire(Bool())

  val reg_rdata_next = Wire(UInt(DW.W))
}
