package primitives
import chisel3._

class DataMem extends Module {
  val io = IO(new Bundle {
    val csb_i = Input(Bool())   // active low chip select
    val we_i = Input(Bool())    // active low write enable
    val addr_i = Input(UInt(14.W))
    val wdata_i = Input(Vec(4, UInt(8.W)))
    val wmask_i = Input(Vec(4, Bool()))
    val rdata_o = Output(Vec(4, UInt(8.W)))
  })

  val mem = SyncReadMem(16384, Vec(4, UInt(8.W)))
  when(!io.csb_i && !io.we_i) {
    mem.write(io.addr_i, io.wdata_i, io.wmask_i)
    io.rdata_o := DontCare
  } .elsewhen(!io.csb_i && io.we_i) {
    io.rdata_o := mem.read(io.addr_i)
  } .otherwise {
    io.rdata_o := DontCare
  }

}