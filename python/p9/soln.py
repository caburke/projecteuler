from itertools import product

tups = product(range(1,1000), range(1,1000), range(1,1000))

x = filter(lambda x: (x[0] < x[1] < x[2]) and (sum(x) == 1000) and (x[0]**2 + x[1]**2 == x[2]**2))

print(x[0] * x[1] * x[2])
