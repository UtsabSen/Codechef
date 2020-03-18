# Source: https://www.codechef.com/problems/FLOW013

n = int(input())
l = [100,50,10,5,2,1]
for it in range(n):
    a,b,c = map(int,input().split())
    if(a+b+c == 180 and a > 0 and b > 0 and c > 0):
        print("YES")
    else:
        print("NO")
