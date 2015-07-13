# Sum of even valued Fibonnacci numbers whose value is less than 4M
# Function courtesy of stackoverflow http://stackoverflow.com/questions/494594/how-to-write-the-fibonacci-sequence-in-python
def fib(max):
	a,b = 0,1
	yield a
	yield b
	while b < max:
		a, b = b, a + b
		yield b

x = fib(4000000)
print(sum(n for n in x if n % 2 == 0))
