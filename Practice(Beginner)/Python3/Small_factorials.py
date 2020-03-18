# Source: https://www.codechef.com/problems/FCTRL2

def fact(x):
    if(x == 1):
        return 1
    else:
        return x*fact(x-1)
n = int(input())
for i in range(n):
    num = int(input())
    if(num == 0):
        print(1)
    else:
        print(fact(num))
