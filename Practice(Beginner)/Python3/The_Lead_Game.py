# Source: https://www.codechef.com/problems/TLG

n = int(input())
p1 = []
p2 = []
a,b=map(int,input().split())
p1.append(a)
p2.append(b)
for i in range(1,n):
    a,b = map(int,input().split())
    p1.append(p1[i-1]+a)
    p2.append(p2[i-1]+b)
d = {1:0,2:0}
for i in range(n):
    if(p1[i] > p2[i] and p1[i]-p2[i] > d[1]):
        d[1] = p1[i]-p2[i]
    elif(p2[i] > p1[i] and p2[i]-p1[i] > d[2]):
        d[2] = p2[i]-p1[i]
if(d[1] > d[2]):
    print(1,d[1])
else:
    print(2,d[2])
