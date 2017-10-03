import sys

while True:
    a = input()
    if (a == "0"):
        break
    
    if (int(a)) % 17 == 0:
        print(1)
    else:
        print(0)
