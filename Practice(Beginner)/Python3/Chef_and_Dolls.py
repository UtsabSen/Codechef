# Source: https://www.codechef.com/problems/MISSP

t = int(input())
for test in range(t):
    n = int(input())
    d = {}
    for i in range(n):
        temp = int(input())
        if(temp in d):
            d[temp] += 1
        else:
            d[temp] = 1
    for key, val in d.items():
        if(val%2 != 0):
            print(key)
            break