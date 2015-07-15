prime = 600851475143

factors = []

d = 2

while prime > 1:

	while prime % d == 0:

		factors.append(d)

		prime /= d
	
	d += 1

print(max(factors))
