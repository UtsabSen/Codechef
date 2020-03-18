# Source: https://www.codechef.com/problems/FLOW005

n = int(input())
l = [100,50,10,5,2,1]
for it in range(n):
    p = int(input())
    c = 0
    while(p!=0):
        for i in l:
            if(i <= p):
                p = p - i
                c += 1
                break
    print(c)
