# Source: https://www.codechef.com/problems/FLOW008

n = int(input())
for i in range(n):
    x = int(input())
    if(x < 10):
        print("What an obedient servant you are!")
    else:
        print(-1)
