# Source: https://www.codechef.com/problems/CIELRCPT

n = int(input())
l = [2048,1024,512,256,128,64,32,16,8,4,2,1]
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
