# Source: https://www.codechef.com/problems/TWOVSTEN

def twoVsTen(n):
    if (n % 10 == 0):
        return 0
    elif (n % 10 == 5):
        return 1
    else:
        return -1
t = int(input())
for test in range(t):
    n = int(input())
    print(twoVsTen(n))
