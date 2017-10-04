import operator as op
from functools import reduce
import sys

def ncr(n, r):
    r = min(r, n-r)
    if r == 0:
        return 1
    num = reduce(op.mul, range(n, n-r, -1))
    den = reduce(op.mul, range(1, r+1))

    return num//den

for line in sys.stdin:
    nums = line.split()
    a = ncr(int(nums[0]), int(nums[1]))
    b = ncr(int(nums[2]), int(nums[3]))
    print ("{0:.5f}".format(a/b))
