# Source: https://www.codechef.com/problems/FLOW011

n = int(input())
for i in range(n):
    bs = int(input())
    if(bs < 1500):
        hra = bs*0.10
        da = bs*0.90
    else:
        hra = 500
        da = bs*0.98
    print("{:0.2f}".format(bs+hra+da))
