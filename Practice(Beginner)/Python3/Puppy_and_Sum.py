# Source: https://www.codechef.com/problems/PPSUM

from functools import reduce
it = int(input())
for j in range(it):
    a,b=map(int,input().split())
    for i in range(a):
        b = reduce(lambda x,y: x+y,list(range(1,b+1)))
    print(b)
