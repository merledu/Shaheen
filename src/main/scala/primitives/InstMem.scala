package primitives
import chisel3._
import scala.collection.script.Reset
import chisel3.util.experimental.loadMemoryFromFile

class InstMem extends Module {
  val io = IO(new Bundle{
//    val instr_addr_i = Input(UInt(14.W))
//    val instr_rdata_o = Output(UInt(32.W))
    val csb_i = Input(Bool())   // active low chip select
    val we_i = Input(Bool())    // active low write enable
    val addr_i = Input(UInt(8.W))
    val wdata_i = Input(UInt(32.W))
    val rdata_o = Output(UInt(32.W))
  })

  val mem = SyncReadMem(256, UInt(32.W))
  
//  loadMemoryFromFile(mem,"/home/merl/Desktop/mem.txt")
//
//  io.instr_rdata_o := mem.read(io.instr_addr_i)

  when(!io.csb_i && !io.we_i) {
    mem.write(io.addr_i, io.wdata_i)
    io.rdata_o := DontCare
  } .elsewhen(!io.csb_i && io.we_i) {
    io.rdata_o := mem.read(io.addr_i)
  } .otherwise {
    io.rdata_o := DontCare
  }
  
}
