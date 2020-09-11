package uart
import org.scalatest._
import chisel3._
import chiseltest._
import tilelink.TLConfiguration

class UartTest extends FlatSpec with ChiselScalatestTester with Matchers {
  implicit val conf = TLConfiguration()
  behavior of "uart register top"

  it should "just connect without errors" in {
    test(new UartRegTop) {c =>
      c.clock.step(10)
    }
  }
}
