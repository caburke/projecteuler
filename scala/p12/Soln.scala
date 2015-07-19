import scala.annotation.tailrec

object Soln extends App {
  @tailrec
  def findnum (i :Int, x :Int) :Int = {
    val divs = (1 to math.sqrt(x).toInt).filter(x % _ == 0).flatMap(n => List(n, x/n).distinct)
    if (divs.length > 500) x
    else findnum(i+1, x+i)
  }
  val answer = findnum(1, 0)
  println(answer)
}