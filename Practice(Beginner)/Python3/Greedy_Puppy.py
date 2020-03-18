# Source: https://www.codechef.com/problems/GDOG

t = int(input())
while(t):
    n, k = map(int, input().split())
    maxProfit = 0;
    for i in range(1,k+1):
        maxProfit = max(maxProfit,n%i)
    print(maxProfit)
    t -= 1
