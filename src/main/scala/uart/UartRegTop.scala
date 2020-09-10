package uart
import chisel3._
import registers.{SubReg, SubRegExt}
import tilelink.{TLConfiguration, TL_D2H, TL_H2D, TL_RegAdapter}

class UartRegTop(implicit val conf: TLConfiguration) extends Module {
  val io = IO(new Bundle {
    val tl_i = Flipped(new TL_H2D)
    val tl_o = new TL_D2H
    val reg2hw = new UartReg2HW
    val hw2reg = new UartHw2Reg
  })

  val AW = 6
  val DW = 32
  val DBW = DW/8

  val reg_we, reg_re, reg_error, addrmiss, wr_err = Wire(Bool())
  val reg_addr = Wire(UInt(AW.W))
  val reg_wdata, reg_rdata, reg_rdata_next = Wire(UInt(DW.W))
  val reg_be = Wire(UInt(DBW.W))

  val tlul_regAdapter = Module(new TL_RegAdapter(AW)())
  tlul_regAdapter.io.tl_i <> io.tl_i
  io.tl_o <> tlul_regAdapter.io.tl_o
  reg_we := tlul_regAdapter.io.we_o
  reg_re := tlul_regAdapter.io.re_o
  reg_addr := tlul_regAdapter.io.addr_o
  reg_wdata := tlul_regAdapter.io.wdata_o
  reg_be := tlul_regAdapter.io.be_o
  tlul_regAdapter.io.rdata_i := reg_rdata
  tlul_regAdapter.io.error_i := reg_error

  reg_rdata := reg_rdata_next
  reg_error := addrmiss | wr_err

  /** Declaring software related signals for the registers */

  // Declaring software wires for each bit field of INTR_STATE register
  val intr_state_tx_empty_we = Wire(Bool())
  val intr_state_tx_empty_wd = Wire(Bool())
  val intr_state_tx_empty_qs = Wire(Bool())
  val intr_state_rx_overflow_we = Wire(Bool())
  val intr_state_rx_overflow_wd = Wire(Bool())
  val intr_state_rx_overflow_qs = Wire(Bool())
  val intr_state_rx_frame_err_we = Wire(Bool())
  val intr_state_rx_frame_err_wd = Wire(Bool())
  val intr_state_rx_frame_err_qs = Wire(Bool())
  val intr_state_rx_break_err_we = Wire(Bool())
  val intr_state_rx_break_err_wd = Wire(Bool())
  val intr_state_rx_break_err_qs = Wire(Bool())
  val intr_state_rx_timeout_we = Wire(Bool())
  val intr_state_rx_timeout_wd = Wire(Bool())
  val intr_state_rx_timeout_qs = Wire(Bool())
  val intr_state_rx_parity_err_we = Wire(Bool())
  val intr_state_rx_parity_err_wd = Wire(Bool())
  val intr_state_rx_parity_err_qs = Wire(Bool())

  // Declaring software wires for each bit field of INTR_ENABLE register
  val intr_enable_tx_empty_we = Wire(Bool())
  val intr_enable_tx_empty_wd = Wire(Bool())
  val intr_enable_tx_empty_qs = Wire(Bool())
  val intr_enable_rx_overflow_we = Wire(Bool())
  val intr_enable_rx_overflow_wd = Wire(Bool())
  val intr_enable_rx_overflow_qs = Wire(Bool())
  val intr_enable_rx_frame_err_we = Wire(Bool())
  val intr_enable_rx_frame_err_wd = Wire(Bool())
  val intr_enable_rx_frame_err_qs = Wire(Bool())
  val intr_enable_rx_break_err_we = Wire(Bool())
  val intr_enable_rx_break_err_wd = Wire(Bool())
  val intr_enable_rx_break_err_qs = Wire(Bool())
  val intr_enable_rx_timeout_we = Wire(Bool())
  val intr_enable_rx_timeout_wd = Wire(Bool())
  val intr_enable_rx_timeout_qs = Wire(Bool())
  val intr_enable_rx_parity_err_we = Wire(Bool())
  val intr_enable_rx_parity_err_wd = Wire(Bool())
  val intr_enable_rx_parity_err_qs = Wire(Bool())

  // Declaring software wires for each bit field of INTR_TEST register
  val intr_test_tx_empty_we = Wire(Bool())
  val intr_test_tx_empty_wd = Wire(Bool())
  val intr_test_rx_overflow_we = Wire(Bool())
  val intr_test_rx_overflow_wd = Wire(Bool())
  val intr_test_rx_frame_err_we = Wire(Bool())
  val intr_test_rx_frame_err_wd = Wire(Bool())
  val intr_test_rx_break_err_we = Wire(Bool())
  val intr_test_rx_break_err_wd = Wire(Bool())
  val intr_test_rx_timeout_we = Wire(Bool())
  val intr_test_rx_timeout_wd = Wire(Bool())
  val intr_test_rx_parity_err_we = Wire(Bool())
  val intr_test_rx_parity_err_wd = Wire(Bool())

  // Declaring software wires for each bit field of CTRL register
  val ctrl_tx_we = Wire(Bool())
  val ctrl_tx_wd = Wire(Bool())
  val ctrl_tx_qs = Wire(Bool())
  val ctrl_rx_we = Wire(Bool())
  val ctrl_rx_wd = Wire(Bool())
  val ctrl_rx_qs = Wire(Bool())
  val ctrl_slpbk_we = Wire(Bool())
  val ctrl_slpbk_wd = Wire(Bool())
  val ctrl_slpbk_qs = Wire(Bool())
  val ctrl_llpbk_we = Wire(Bool())
  val ctrl_llpbk_wd = Wire(Bool())
  val ctrl_llpbk_qs = Wire(Bool())
  val ctrl_parity_en_we = Wire(Bool())
  val ctrl_parity_en_wd = Wire(Bool())
  val ctrl_parity_en_qs = Wire(Bool())
  val ctrl_parity_odd_we = Wire(Bool())
  val ctrl_parity_odd_wd = Wire(Bool())
  val ctrl_parity_odd_qs = Wire(Bool())
  val ctrl_rxblvl_we = Wire(Bool())
  val ctrl_rxblvl_wd = Wire(UInt(2.W))
  val ctrl_rxblvl_qs = Wire(UInt(2.W))
  val ctrl_nco_we = Wire(Bool())
  val ctrl_nco_wd = Wire(UInt(16.W))
  val ctrl_nco_qs = Wire(UInt(16.W))

  // Declaring software wires for each bit field of STATUS register
  val status_txfull_qs = Wire(Bool())
  val status_txfull_re = Wire(Bool())
  val status_rxfull_qs = Wire(Bool())
  val status_rxfull_re = Wire(Bool())
  val status_txempty_qs = Wire(Bool())
  val status_txempty_re = Wire(Bool())
  val status_txidle_qs = Wire(Bool())
  val status_txidle_re = Wire(Bool())
  val status_rxidle_qs = Wire(Bool())
  val status_rxidle_re = Wire(Bool())
  val status_rxempty_qs = Wire(Bool())
  val status_rxempty_re = Wire(Bool())

  // Declaring software wires for RDATA register
  val rdata_qs = Wire(UInt(8.W))
  val rdata_re = Wire(Bool())

  // Declaring software wires for WDATA register
  val wdata_wd = Wire(UInt(8.W))
  val wdata_we = Wire(Bool())

  // Declaring software wires for each bit field of FIFO_CTRL register
  val fifo_ctrl_rxrst_wd = Wire(Bool())
  val fifo_ctrl_rxrst_we = Wire(Bool())
  val fifo_ctrl_txrst_wd = Wire(Bool())
  val fifo_ctrl_txrst_we = Wire(Bool())

  // Declaring software wires for each bit field of FIFO_STATUS register
  val fifo_status_txlvl_qs = Wire(UInt(6.W))
  val fifo_status_txlvl_re = Wire(Bool())
  val fifo_status_rxlvl_qs = Wire(UInt(6.W))
  val fifo_status_rxlvl_re = Wire(Bool())

  // Declaring software wires for each bit field of OVRD register
  val ovrd_txen_we = Wire(Bool())
  val ovrd_txen_wd = Wire(Bool())
  val ovrd_txen_qs = Wire(Bool())
  val ovrd_txval_we = Wire(Bool())
  val ovrd_txval_wd = Wire(Bool())
  val ovrd_txval_qs = Wire(Bool())


  /** Creating registers for each bit field of INTR_STATE register */
  val intr_state_tx_empty_reg = Module(new SubReg(SWACCESS = "W1C", DW = 1)())
  intr_state_tx_empty_reg.io.we := intr_state_tx_empty_we
  intr_state_tx_empty_reg.io.wd := intr_state_tx_empty_wd
  intr_state_tx_empty_reg.io.d := io.hw2reg.intr_state.tx_empty.d
  intr_state_tx_empty_reg.io.de := io.hw2reg.intr_state.tx_empty.de
  io.reg2hw.intr_state.tx_empty.q := intr_state_tx_empty_reg.io.q
  intr_state_tx_empty_qs := intr_state_tx_empty_reg.io.qs

  val intr_state_rx_overflow_reg = Module(new SubReg(SWACCESS = "W1C", DW = 1)())
  intr_state_rx_overflow_reg.io.we := intr_state_rx_overflow_we
  intr_state_rx_overflow_reg.io.wd := intr_state_rx_overflow_wd
  intr_state_rx_overflow_reg.io.d := io.hw2reg.intr_state.rx_overflow.d
  intr_state_rx_overflow_reg.io.de := io.hw2reg.intr_state.rx_overflow.de
  io.reg2hw.intr_state.rx_overflow.q := intr_state_rx_overflow_reg.io.q
  intr_state_rx_overflow_qs := intr_state_rx_overflow_reg.io.qs

  val intr_state_rx_frame_err_reg = Module(new SubReg(SWACCESS = "W1C", DW = 1)())
  intr_state_rx_frame_err_reg.io.we := intr_state_rx_frame_err_we
  intr_state_rx_frame_err_reg.io.wd := intr_state_rx_frame_err_wd
  intr_state_rx_frame_err_reg.io.d := io.hw2reg.intr_state.rx_frame_err.d
  intr_state_rx_frame_err_reg.io.de := io.hw2reg.intr_state.rx_frame_err.de
  io.reg2hw.intr_state.rx_frame_err.q := intr_state_rx_frame_err_reg.io.q
  intr_state_rx_frame_err_qs := intr_state_rx_frame_err_reg.io.qs

  val intr_state_rx_break_err_reg = Module(new SubReg(SWACCESS = "W1C", DW = 1)())
  intr_state_rx_break_err_reg.io.we := intr_state_rx_break_err_we
  intr_state_rx_break_err_reg.io.wd := intr_state_rx_break_err_wd
  intr_state_rx_break_err_reg.io.d := io.hw2reg.intr_state.rx_break_err.d
  intr_state_rx_break_err_reg.io.de := io.hw2reg.intr_state.rx_break_err.de
  io.reg2hw.intr_state.rx_break_err.q := intr_state_rx_break_err_reg.io.q
  intr_state_rx_break_err_qs := intr_state_rx_break_err_reg.io.qs

  val intr_state_rx_timeout_reg = Module(new SubReg(SWACCESS = "W1C", DW = 1)())
  intr_state_rx_timeout_reg.io.we := intr_state_rx_timeout_we
  intr_state_rx_timeout_reg.io.wd := intr_state_rx_timeout_wd
  intr_state_rx_timeout_reg.io.d := io.hw2reg.intr_state.rx_timeout.d
  intr_state_rx_timeout_reg.io.de := io.hw2reg.intr_state.rx_timeout.de
  io.reg2hw.intr_state.rx_timeout.q := intr_state_rx_timeout_reg.io.q
  intr_state_rx_timeout_qs := intr_state_rx_timeout_reg.io.qs

  val intr_state_rx_parity_err_reg = Module(new SubReg(SWACCESS = "W1C", DW = 1)())
  intr_state_rx_parity_err_reg.io.we := intr_state_rx_parity_err_we
  intr_state_rx_parity_err_reg.io.wd := intr_state_rx_parity_err_wd
  intr_state_rx_parity_err_reg.io.d := io.hw2reg.intr_state.rx_parity_err.d
  intr_state_rx_parity_err_reg.io.de := io.hw2reg.intr_state.rx_parity_err.de
  io.reg2hw.intr_state.rx_parity_err.q := intr_state_rx_parity_err_reg.io.q
  intr_state_rx_parity_err_qs := intr_state_rx_parity_err_reg.io.qs

  /** Creating registers for each bit field of INTR_ENABLE register */
  val intr_enable_tx_empty_reg = Module(new SubReg(SWACCESS = "RW", DW = 1)())
  intr_enable_tx_empty_reg.io.we := intr_enable_tx_empty_we
  intr_enable_tx_empty_reg.io.wd := intr_enable_tx_empty_wd
  intr_enable_tx_empty_reg.io.d := false.B
  intr_enable_tx_empty_reg.io.de := false.B
  io.reg2hw.intr_enable.tx_empty.q := intr_enable_tx_empty_reg.io.q
  intr_enable_tx_empty_qs := intr_enable_tx_empty_reg.io.qs

  val intr_enable_rx_overflow_reg = Module(new SubReg(SWACCESS = "RW", DW = 1)())
  intr_enable_rx_overflow_reg.io.we := intr_enable_rx_overflow_we
  intr_enable_rx_overflow_reg.io.wd := intr_enable_rx_overflow_wd
  intr_enable_rx_overflow_reg.io.d := false.B
  intr_enable_rx_overflow_reg.io.de := false.B
  io.reg2hw.intr_enable.rx_overflow.q := intr_enable_rx_overflow_reg.io.q
  intr_enable_rx_overflow_qs := intr_enable_rx_overflow_reg.io.qs

  val intr_enable_rx_frame_err_reg = Module(new SubReg(SWACCESS = "RW", DW = 1)())
  intr_enable_rx_frame_err_reg.io.we := intr_enable_rx_frame_err_we
  intr_enable_rx_frame_err_reg.io.wd := intr_enable_rx_frame_err_wd
  intr_enable_rx_frame_err_reg.io.d := false.B
  intr_enable_rx_frame_err_reg.io.de := false.B
  io.reg2hw.intr_enable.rx_frame_err.q := intr_enable_rx_frame_err_reg.io.q
  intr_enable_rx_frame_err_qs := intr_enable_rx_frame_err_reg.io.qs

  val intr_enable_rx_break_err_reg = Module(new SubReg(SWACCESS = "RW", DW = 1)())
  intr_enable_rx_break_err_reg.io.we := intr_enable_rx_break_err_we
  intr_enable_rx_break_err_reg.io.wd := intr_enable_rx_break_err_wd
  intr_enable_rx_break_err_reg.io.d := false.B
  intr_enable_rx_break_err_reg.io.de := false.B
  io.reg2hw.intr_enable.rx_break_err.q := intr_enable_rx_break_err_reg.io.q
  intr_enable_rx_break_err_qs := intr_enable_rx_break_err_reg.io.qs

  val intr_enable_rx_timeout_reg = Module(new SubReg(SWACCESS = "RW", DW = 1)())
  intr_enable_rx_timeout_reg.io.we := intr_enable_rx_timeout_we
  intr_enable_rx_timeout_reg.io.wd := intr_enable_rx_timeout_wd
  intr_enable_rx_timeout_reg.io.d := false.B
  intr_enable_rx_timeout_reg.io.de := false.B
  io.reg2hw.intr_enable.rx_timeout.q := intr_enable_rx_timeout_reg.io.q
  intr_enable_rx_timeout_qs := intr_enable_rx_timeout_reg.io.qs

  val intr_enable_rx_parity_err_reg = Module(new SubReg(SWACCESS = "RW", DW = 1)())
  intr_enable_rx_parity_err_reg.io.we := intr_enable_rx_timeout_we
  intr_enable_rx_parity_err_reg.io.wd := intr_enable_rx_timeout_wd
  intr_enable_rx_parity_err_reg.io.d := false.B
  intr_enable_rx_parity_err_reg.io.de := false.B
  io.reg2hw.intr_enable.rx_parity_err.q := intr_enable_rx_parity_err_reg.io.q
  intr_enable_rx_parity_err_qs := intr_enable_rx_parity_err_reg.io.qs

  /** Creating registers for each bit field of INTR_TEST register */
  val intr_test_tx_empty_reg = Module(new SubRegExt(DW = 1))
  intr_test_tx_empty_reg.io.re := false.B
  intr_test_tx_empty_reg.io.we := intr_test_tx_empty_we
  intr_test_tx_empty_reg.io.wd := intr_test_tx_empty_wd
  intr_test_tx_empty_reg.io.d := false.B
  io.reg2hw.intr_test.tx_empty.q := intr_test_tx_empty_reg.io.q
  io.reg2hw.intr_test.tx_empty.qe := intr_test_tx_empty_reg.io.qe

  val intr_test_rx_overflow_reg = Module(new SubRegExt(DW = 1))
  intr_test_rx_overflow_reg.io.re := false.B
  intr_test_rx_overflow_reg.io.we := intr_test_rx_overflow_we
  intr_test_rx_overflow_reg.io.wd := intr_test_rx_overflow_wd
  intr_test_rx_overflow_reg.io.d := false.B
  io.reg2hw.intr_test.rx_overflow.q := intr_test_rx_overflow_reg.io.q
  io.reg2hw.intr_test.rx_overflow.qe := intr_test_rx_overflow_reg.io.qe

  val intr_test_rx_frame_err_reg = Module(new SubRegExt(DW = 1))
  intr_test_rx_frame_err_reg.io.re := false.B
  intr_test_rx_frame_err_reg.io.we := intr_test_rx_frame_err_we
  intr_test_rx_frame_err_reg.io.wd := intr_test_rx_frame_err_wd
  intr_test_rx_frame_err_reg.io.d := false.B
  io.reg2hw.intr_test.rx_frame_err.q := intr_test_rx_frame_err_reg.io.q
  io.reg2hw.intr_test.rx_frame_err.qe := intr_test_rx_frame_err_reg.io.qe

  val intr_test_rx_break_err_reg = Module(new SubRegExt(DW = 1))
  intr_test_rx_break_err_reg.io.re := false.B
  intr_test_rx_break_err_reg.io.we := intr_test_rx_break_err_we
  intr_test_rx_break_err_reg.io.wd := intr_test_rx_break_err_wd
  intr_test_rx_break_err_reg.io.d := false.B
  io.reg2hw.intr_test.rx_break_err.q := intr_test_rx_break_err_reg.io.q
  io.reg2hw.intr_test.rx_break_err.qe := intr_test_rx_break_err_reg.io.qe

  val intr_test_rx_timeout_reg = Module(new SubRegExt(DW = 1))
  intr_test_rx_timeout_reg.io.re := false.B
  intr_test_rx_timeout_reg.io.we := intr_test_rx_timeout_we
  intr_test_rx_timeout_reg.io.wd := intr_test_rx_timeout_wd
  intr_test_rx_timeout_reg.io.d := false.B
  io.reg2hw.intr_test.rx_timeout.q := intr_test_rx_timeout_reg.io.q
  io.reg2hw.intr_test.rx_timeout.qe := intr_test_rx_timeout_reg.io.qe

  val intr_test_rx_parity_err_reg = Module(new SubRegExt(DW = 1))
  intr_test_rx_parity_err_reg.io.re := false.B
  intr_test_rx_parity_err_reg.io.we := intr_test_rx_parity_err_we
  intr_test_rx_parity_err_reg.io.wd := intr_test_rx_parity_err_wd
  intr_test_rx_parity_err_reg.io.d := false.B
  io.reg2hw.intr_test.rx_parity_err.q := intr_test_rx_parity_err_reg.io.q
  io.reg2hw.intr_test.rx_parity_err.qe := intr_test_rx_parity_err_reg.io.qe

  /** Creating registers for each bit field of CTRL register */

}
