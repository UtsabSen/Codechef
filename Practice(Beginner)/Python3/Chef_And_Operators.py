# Source: https://www.codechef.com/problems/CHOPRT

n = int(input())
for i in range(n):
    a,b = map(int,input().split())
    if(a < b):
        print("<")
    elif(b < a):
        print(">")
    else:
        print("=")
