# Source: https://www.codechef.com/problems/FLOW017

n = int(input())
for it in range(n):
    a,b,c = map(int,input().split())
    if(b < a < c or c < a < b):
        print(a)
    elif(a < b < c or c < b < a):
        print(b)
    else:
        print(c)
