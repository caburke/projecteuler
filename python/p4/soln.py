from itertools import product

pairs = product(list(range(1000)), list(range(1000)))
prods = [x[0] * x[1] for x in pairs]
answer = max(x for x in prods if str(x) == str(x)[::-1])

print answer
