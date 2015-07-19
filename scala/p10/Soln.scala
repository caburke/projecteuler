import scala.annotation.tailrec

object Soln {

  def sieve(limit: Int) : collection.mutable.Set[Int] = {
    val primes: collection.mutable.Set[Int] = collection.mutable.Set.empty ++ (2 to limit)
    val sqrtLimit: Int = math.sqrt(limit).toInt

    @tailrec
    def prim(candidate: Int): Unit = {
      if (candidate <= sqrtLimit) {
        if (primes contains candidate) {
          primes --= candidate * candidate to limit by candidate
        }
        prim(candidate + 1)
      }
    }
    prim(2)
    return primes
  }

  def main(args: Array[String]): Unit = {
    val limit: Int= args(0).toInt
    val primes = sieve(limit)
    println(primes.foldLeft(BigInt(0))(_ + _))
  }

}