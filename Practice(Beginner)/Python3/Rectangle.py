# Source: https://www.codechef.com/problems/RECTANGL

t = int(input())
for test in range(t):
    a, b, c, d = map(int, input().split())
    if (a == b and c == d):
        print("YES")
    elif (a == c and b == d):
        print("YES")
    elif (a == d and b == c):
        print("YES")
    else:
        print("NO")
