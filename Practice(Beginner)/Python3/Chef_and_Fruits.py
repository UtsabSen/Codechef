# Source: https://www.codechef.com/problems/FRUITS

n = int(input())
for i in range(n):
    a,o,c = map(int,input().split())
    if(a>o and (a-o)>c):
        print(a-o-c)
    elif(a<o and (o-a)>c):
        print(o-a-c)
    else:
        print(0)
