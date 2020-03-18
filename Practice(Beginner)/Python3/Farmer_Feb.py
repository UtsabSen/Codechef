# Source: https://www.codechef.com/problems/POTATOES

def isPrime(n):
    for i in range(2, int(n**0.5)+1):
        if(n%i == 0):
            return False
    return True

t = int(input())
for i in range(t):
    x, y = map(int, input().split())
    i = 1
    while(isPrime(x+y+i) == False):
        i += 1
    print(i)
