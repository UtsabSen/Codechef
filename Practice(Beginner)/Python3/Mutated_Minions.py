# Source: https://www.codechef.com/problems/CHN15A#

t = int(input())

for test in range(t):
    n, v = map(int, input().split())
    l = list(map(int, input().split()))
    c = 0
    for i in l:
        if((i+v) % 7 == 0):
            c += 1
    print(c)