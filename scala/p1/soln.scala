object Soln {
	def main(args: Array[String]){
		val answer = (0 to 999).filter(x => (x % 3 == 0 | x % 5 == 0)).sum
		println(answer)
	}
}
