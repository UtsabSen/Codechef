# Source: https://www.codechef.com/problems/MNMX

t = int(input())
for test in range(t):
    length = int(input())
    l = list(map(int, input().split()))
    print(min(l)*(length-1))
