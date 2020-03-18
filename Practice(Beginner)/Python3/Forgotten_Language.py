# Source: https://www.codechef.com/problems/FRGTNLNG

t = int(input())
for test in range(t):
    n, k = map(int, input().split())
    lang = list(map(str,input().split()))
    s = set()
    for i in range(k):
        l, *temp = map(str,input().split())
        s.update(set(temp))
    s = set(s)
    for j in lang:
        if (j in s):
            print("YES", end=" ")
        else:
            print("NO", end=" ")
    print()
