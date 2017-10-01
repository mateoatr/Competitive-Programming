import sys

_max = 2147483648

for line in sys.stdin:
    token = line.split()
    print(token[0] + " " + token[1] + " " + token[2])
    if (int(token[0]) >= _max):
        print("first number too big")
    if (int(token[2]) >= _max):
        print("second number too big")
        
    if (token[1] == "+"):
        if ((int(token[0]) + int(token[2])) >= _max):
            print("result too big")
    else:
        if ((int(token[0]) * int(token[2])) >= _max):
            print("result too big")
