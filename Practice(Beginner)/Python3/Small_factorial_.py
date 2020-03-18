# Source: https://www.codechef.com/problems/FLOW018

n = int(input())
for i in range(n):
    x = int(input())
    fact = 1
    while(x>0):
        fact *= x
        x -= 1
    print(fact)
