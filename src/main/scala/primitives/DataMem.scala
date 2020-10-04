package primitives
import chisel3._

class DataMem extends Module {
  val io = IO(new Bundle {
    val we_i = Input(Bool())
//    val re_i = Input(Bool())
    val addr_i = Input(UInt(14.W))
    val wdata_i = Input(UInt(32.W))
    val mask_i = Input(UInt(4.W))
    val rdata_o = Output(UInt(32.W))
  })

  val mem = SyncReadMem(16384, UInt(32.W))
  when(io.we_i) {
    mem.write(io.addr_i, io.wdata_i)
    io.rdata_o := DontCare
  } .otherwise {
    io.rdata_o := mem.read(io.addr_i)
  }

}
