# Source: https://www.codechef.com/problems/COLOR

t = int(input())

for test in range(t):
    a, b, n = map(int,input().split(" "))
    if(n%2 == 1):
        a*=2
    print(max(a,b)//min(a,b))