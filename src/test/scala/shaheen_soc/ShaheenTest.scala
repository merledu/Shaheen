package shaheen_soc

import chisel3.iotesters._
import org.scalatest._
import chiseltest._
import merl.uit.tilelink.TLConfiguration

class ShaheenTest(c: ShaheenTop) extends PeekPokeTester(c) {
  step(20)
}

object ShaheenTestDriver extends App {
  implicit val conf = TLConfiguration()
//  Driver(() => new ShaheenTop) {c => new ShaheenTest(c)}
  Driver.execute(Array("--generate-vcd-output", "on"), () => new ShaheenTop()) {c => new ShaheenTest(c)}
}

//class ShaheenTest extends FlatSpec with ChiselScalatestTester with Matchers {
//  implicit val conf = TLConfiguration()
//  behavior of "shaheen soc top"
//
//  it should "just connect without errors" in {
//    test(new ShaheenTop()) {c =>
//      c.clock.step(20)
//    }
//  }
//}
