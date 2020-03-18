# Source: https://www.codechef.com/problems/LONGSEQ

t = int(input())
for test in range(t):
    s = input()
    zero = s.count('0')
    one = len(s) - zero
    print("Yes") if (one == 1 or zero == 1) else print("No")
