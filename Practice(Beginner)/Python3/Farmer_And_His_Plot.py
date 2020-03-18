# Source: https://www.codechef.com/problems/RECTSQ

import math
t = int(input())
for test in range(t):
    a, b = map(int, input().split())
    c = math.gcd(a,b)
    print((a//c)*(b//c))
