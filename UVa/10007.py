import operator as op
from functools import reduce
import math
import sys

def ncr(n, r):
    r = min(r, n-r)
    if r == 0:
        return 1
    num = reduce(op.mul, range(n, n-r, -1))
    den = reduce(op.mul, range(1, r+1))

    return int(num//den)

for line in sys.stdin:
    n = int(line)
    if n == 0:
        break
    print (((1/(n+1)) * (ncr(2*n, n))) * math.factorial(n))
