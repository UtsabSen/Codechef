# Source: https://www.codechef.com/problems/TRICOIN

def heightOfTriangle(n):
    s = 0
    i = 1
    while(True):
        s += i
        i += 1
        if(n < s):
            break
    if ((((i-1)*i)/2) > n):
        return i-2
    elif ((((i-1)*i)/2) == n):
        return i

t = int(input())
for test in range(t):
    n = int(input())
    print(heightOfTriangle(n))
        
