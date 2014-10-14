# Solution to problem 1

import numpy as np

upper_bound = 1000
divisors = set([3, 5])
multiples = set()

for div in divisors:

    i = 1

    mult = div * i

    while mult < upper_bound:

        multiples.add(mult)

        i += 1

        mult = div * i

sum_mult = sum(multiples)

print sum_mult
