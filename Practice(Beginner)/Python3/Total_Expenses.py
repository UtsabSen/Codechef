# Source: https://www.codechef.com/problems/FLOW009

n = int(input())
for i in range(n):
    a,c = map(float,input().split())
    if(a > 1000):
        a = (a*90)/100
    print("{:.6f}".format(a*c))
