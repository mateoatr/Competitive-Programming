import sys

def reverse(num):
    return int(str(num)[::-1])

cases = int(input())

for i in range(0, cases):
    nums = input().split()
    a = reverse(nums[0])
    b = reverse(nums[1])
    print(reverse(a+b))
