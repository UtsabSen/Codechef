# Source: https://www.codechef.com/problems/COPS

t = int(input())
for test in range(t):
    l = [0]*100
    m, x, y = map(int, input().split())
    police = list(map(int, input().split()))
    for i in range(m):
        start = police[i] - (x*y) - 1
        finish = police[i] + (x*y)
        if(start < 0):
            start = 0
        if(finish > 100):
            finish = 100
        for j in range(start,finish):
            l[j] = 1;
    print(l.count(0))
