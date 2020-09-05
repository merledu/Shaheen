package gpio
import org.scalatest._
import chiseltest._
import chisel3._
import tilelink.TLConfiguration

class GpioTest extends FlatSpec with ChiselScalatestTester with Matchers {
  implicit val conf = TLConfiguration()
  behavior of "Gpio"
  it should "just connect properly and pass test" in {
    test(new Gpio) {c =>
      c.clock.step(10)
    }
  }
}
