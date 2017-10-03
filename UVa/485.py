import operator as op
from functools import reduce

stop = 10**60

def ncr(n, r):
    r = min(r, n-r)
    if r == 0:
        return 1
    numer = reduce(op.mul, range(n, n-r, -1))
    denom = reduce(op.mul, range(1, r+1))

    return numer//denom

S = False
x = 0

while True:
    for i in range(0, x+1):
        a = ncr(x,i)
        if (a >= stop):
            S = True
        if i != 0:
            print (" ", end = "")
        print (str(a), end = "")
    x = x + 1
    print("")
    if S:
        break
    
