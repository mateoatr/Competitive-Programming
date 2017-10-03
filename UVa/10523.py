import sys

for line in sys.stdin:
    nums = line.split()
    N = int(nums[0])
    A = int(nums[1])

    ans = 0

    for i in range(1,N+1):
        ans = ans + (i * (A ** i))

    print(ans)
