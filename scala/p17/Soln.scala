object Soln extends App {
  val num_to_str_ones = Map(0 -> "", 1 -> "one", 2 -> "two", 3 -> "three", 4 -> "four", 5 -> "five", 6 -> "six", 7 -> "seven", 8 -> "eight", 9 -> "nine")
  val num_to_str_teens = Map(10 -> "ten", 11 -> "eleven", 12 -> "twelve", 13 -> "thirteen", 14 -> "fourteen", 15 -> "fifteen", 16 -> "sixteen", 17 -> "seventeen", 18 -> "eighteen", 19 -> "nineteen")
  val num_to_str_tens = Map(2 -> "twenty", 3 -> "thirty", 4 -> "forty", 5 -> "fifty", 6 -> "sixty", 7 -> "seventy", 8 -> "eighty", 9 -> "ninety")

  def print_number(n: Int) : String = {
    if (n == 1000) {return "one thousand" + "\n"}
    else if (n < 10) {return num_to_str_ones(n) + "\n"}  
    else if (n < 20) {return num_to_str_teens(n) + "\n"}
    else if (n < 100) {return num_to_str_tens(n / 10) + " - " + num_to_str_ones(n % 10) + "\n"}
    else if (n % 100 == 0) {return num_to_str_ones(n / 100) + " hundred" + "\n"}
    else if (n % 100 < 10) {return num_to_str_ones(n / 100) + " hundred and " + num_to_str_ones(n % 100) + "\n"}
    else if (n % 100 < 20) {return num_to_str_ones(n / 100) + " hundred and " + num_to_str_teens(n % 100) + "\n"}
    else {return num_to_str_ones(n / 100) + " hundred and " + num_to_str_tens((n % 100) / 10) + " - " + num_to_str_ones((n % 100) % 10) + "\n"}
  }

  //val number_words = (1 to 1000).map(x => print_number(x))
  //println(number_words)
  println((1 to 1000).map(x => print_number(x).replaceAll(" ", "").replaceAll("-", "").trim().length).sum)
}