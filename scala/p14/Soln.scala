import scala.annotation.tailrec

object Soln{
  @tailrec
  def collatz(n: BigInt, cnt: BigInt) : BigInt = {
    val n2 = if (n % 2 == 0) n/2 else 3 * n + 1
    if (n2 == 1) return cnt
    else collatz(n2, cnt+1)
  }

  def main(args: Array[String]): Unit = {
    val answer = (1 to 999999).par.map(x => collatz(x, 1) -> x).toMap.max
    println(answer)
  }
  
}