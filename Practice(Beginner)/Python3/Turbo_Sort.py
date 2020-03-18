# Source: https://www.codechef.com/problems/TSORT

n = int(input())
l = []
for it in range(n):
    l.append(int(input()))
l.sort()
for i in l:
    print(i)
