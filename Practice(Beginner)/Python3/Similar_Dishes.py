# Source: https://www.codechef.com/problems/SIMDISH

t = int(input())
for test in range(t):
    line1 = list(map(str, input().split()))
    line2 = list(map(str, input().split()))
    c = 0
    flag = False
    for i in line1:
        if(i in line2):
            c += 1
        if(c == 2):
            flag =True
            break
    print("similar") if(flag) else print("dissimilar")