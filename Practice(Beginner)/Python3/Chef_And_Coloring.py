# Source: https://www.codechef.com/problems/COLOR

t = int(input())

for test in range(t):
    l = int(input())
    s = input()
    d = dict()
    for i in s:
        if(i in d):
            d[i] += 1
        else:
            d[i] = 1
    maxVal = max(d.values())
    print(len(s) - maxVal)
    d.clear()

