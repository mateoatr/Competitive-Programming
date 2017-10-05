import operator as op
from functools import reduce
import sys

def ncr(n, r):
    r = min(r, n-r)
    if r == 0:
        return 1
    num = reduce(op.mul, range(n, n-r, -1))
    den = reduce(op.mul, range(1, r+1))

    return int(num//den)

first = False
for line in sys.stdin:
    if not line.strip():
        continue
    n = int(line)

    if first:
        print("")
    else:
        first = True

    print(int((1/(n+1)) * (ncr(2 * n, n))))
