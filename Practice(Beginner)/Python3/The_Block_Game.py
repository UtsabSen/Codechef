# Source: https://www.codechef.com/problems/PALL01

n = int(input())
for i in range(n):
    x = input()
    if(x == x[::-1]):
        print("wins")
    else:
        print("losses")
