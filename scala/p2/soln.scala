import scala.math.BigInt

object Soln {
	def main(args: Array[String]){
		val max_fib = 4000000
		lazy val fibs: Stream[BigInt] = BigInt(0) #:: BigInt(1) #:: fibs.zip(fibs.tail).map { n => n._1 + n._2  }	
		val answer = fibs.takeWhile(_ < max_fib).filter(x => x % 2 == 0).sum  
		println(answer)
	}
}
