# Source: https://www.codechef.com/problems/RECIPE

import math
from functools import reduce
n = int(input())
for i in range(n):
    l = list(map(int,input().split()))
    x = reduce(math.gcd,l[1:])
    for j in l[1:]:
        print(j//x,end=" ")
    print()
