# Source: https://www.codechef.com/problems/HOWMANY

n = input()
print(0) if(n == '0') else print(len(n)) if(len(n) < 4) else print("More than 3 digits")
