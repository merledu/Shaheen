package shaheen_soc
import chisel3._
import merl.uit.tilelink.TLConfiguration
import primitives.{DataMem, InstMem}

class Shaheen_top_openram_cv(implicit val conf: TLConfiguration) extends Module {
  val io = IO(new Bundle {
    val rx_i = Input(UInt(1.W))
    val CLK_PER_BIT = Input(UInt(16.W))
    val gpio_i = Input(UInt(30.W))  // 30 io pads being used for gpio in caravel
    val gpio_o = Output(UInt(30.W)) // 30 io pads being used for gpio in caravel
    val gpio_en_o = Output(UInt(30.W))  // 30 io pads being used for gpio in caravel
  })

  val shaheenTop = Module(new ShaheenTop())
  val iccm       = Module(new InstMem)
  val dccm       = Module(new DataMem)

  shaheenTop.io.rx_i := io.rx_i
  shaheenTop.io.CLK_PER_BIT := io.CLK_PER_BIT
  shaheenTop.io.gpio_i := io.gpio_i
  io.gpio_o := shaheenTop.io.gpio_o(29,0)
  io.gpio_en_o := shaheenTop.io.gpio_en_o(29,0)

  iccm.io.csb_i := false.B
  iccm.io.we_i := shaheenTop.io.iccm_we_o
  iccm.io.addr_i := shaheenTop.io.iccm_addr_o
  iccm.io.wdata_i := shaheenTop.io.iccm_wdata_o
  shaheenTop.io.iccm_rdata_i := iccm.io.rdata_o

  dccm.io.csb_i := false.B
  dccm.io.we_i := shaheenTop.io.dccm_we_o
  dccm.io.addr_i := shaheenTop.io.dccm_addr_o
  dccm.io.wdata_i := shaheenTop.io.dccm_wdata_o
  dccm.io.wmask_i := shaheenTop.io.dccm_wmask_o
  shaheenTop.io.dccm_rdata_i := dccm.io.rdata_o

}
