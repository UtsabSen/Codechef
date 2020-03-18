# Source: https://www.codechef.com/problems/SNCKYEAR

t = int(input())
for test in range(t):
    n = int(input())
    print("HOSTED") if (n == 2010 or n == 2015 or n == 2016 or n == 2017 or n == 2019) else print("NOT HOSTED")
