package primitives
import chisel3._
import scala.collection.script.Reset
import chisel3.util.experimental.loadMemoryFromFile

class InstMem extends Module {
  val io = IO(new Bundle{
    val instr_req_i = Input(Bool())
    val instr_addr_i = Input(UInt(14.W))
    val instr_rdata_o = Output(UInt(32.W))
  })

  val mem = SyncReadMem(16383, UInt(32.W))
 // val addr = Wire(UInt(32.W))
  
  loadMemoryFromFile(mem,"/Users/mbp/Desktop/instructions.txt")

  io.instr_rdata_o := mem.read(io.instr_addr_i)
  
  
}
