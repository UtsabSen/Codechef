# Source: https://www.codechef.com/problems/CFRTEST

t = int(input())
for test in range(t):
    n = int(input())
    l = set(list(map(int,input().split())))
    print(len(l))