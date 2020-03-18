# Source: https://www.codechef.com/viewsolution/29120960

n = int(input())
for j in range(n):
    x = int(input())
    l = list(map(int, input().split()))
    s = l[0]+l[1]
    for i in range(len(l)-1):
        if(s > l[i]+l[i+1]):
            s = l[i]+l[i+1]
    print(s)


# Alternate way

"""
n = int(input())
for j in range(n):
    x = int(input())
    l = list(map(int, input().split()))
    l.sort()
    print(l[0]+l[1])
"""