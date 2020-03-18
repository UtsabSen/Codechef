# Source: https://www.codechef.com/problems/LAPIN

n = int(input())
for i in range(n):
    x = input()
    if(len(x)%2 != 0):
        l1 = x[:(len(x))//2]
        l2 = x[((len(x))//2)+1:]
    else:
        l1 = x[:len(x)//2]
        l2 = x[(len(x))//2:]
    f = 0
    for i in l1:
        if(l1.count(i)!=l2.count(i)):
            f = 1
            break
    if(f):
        print("NO")
    else:
        print("YES")
