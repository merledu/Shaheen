package primitives
import chisel3._
import chisel3.util.experimental.loadMemoryFromFile

class InstMem extends Module {
  val io = IO(new Bundle{
    val instr_req_i = Input(Bool())
    val instr_addr_i = Input(UInt(14.W))
    val instr_rdata_o = Output(UInt(32.W))
  })

  val mem = SyncReadMem(16383, UInt(32.W))
  loadMemoryFromFile(mem,"/Users/mbp/Desktop/instructions.txt")
  when(io.instr_req_i) {
    io.instr_rdata_o := mem.read(io.instr_addr_i)
    //io.instr_rvalid_o := true.B
  } .otherwise {
    io.instr_rdata_o := 0.U
    //io.instr_rvalid_o := false.B
  }

  //   io.instr_rvalid_o := true.B


}
