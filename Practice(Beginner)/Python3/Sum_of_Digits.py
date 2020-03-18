# Source: https://www.codechef.com/problems/FLOW006

n = int(input())
for i in range(n):
    num = int(input())
    s = 0
    for j in str(num):
        s += int(j)
    print(s)
