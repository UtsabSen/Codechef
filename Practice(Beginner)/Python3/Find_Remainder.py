# Source: https://www.codechef.com/problems/FLOW002

n = int(input())
for i in range(n):
    x,d=map(int,input().split())
    print(x%d)
