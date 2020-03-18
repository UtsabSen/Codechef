# Source: https://www.codechef.com/problems/INTEST

n,k=map(int, input().split())
c = 0
for i in range(n):
    x = int(input())
    if(x%k == 0):
        c += 1
print(c)
