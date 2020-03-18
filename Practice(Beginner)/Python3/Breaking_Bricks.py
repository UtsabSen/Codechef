# Source: https://www.codechef.com/problems/BRKBKS

n = int(input())
for t in range(n):
    p,a,b,c=map(int,input().split())
    if(a+b+c <= p):
        print(1)
    elif(a+b <= p or b+c <= p):
        print(2)
    else:
        print(3)
