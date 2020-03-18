# Source: https://www.codechef.com/problems/REMISS

n = int(input())
for i in range(n):
    a,b = map(int,input().split())
    if(a > b):
        min_enter = a
    else:
        min_enter = b
    max_enter = a+b
    print(min_enter,max_enter)
