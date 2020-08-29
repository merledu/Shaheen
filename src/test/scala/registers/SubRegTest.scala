package registers
import org.scalatest._
import chiseltest._
import chisel3._

class SubRegTest extends FlatSpec with ChiselScalatestTester with Matchers {
  behavior of "Sub register"
  it should "just run without errors" in {
    test(new SubReg()()) {c =>
      c.clock.step(1)
    }
  }
}
