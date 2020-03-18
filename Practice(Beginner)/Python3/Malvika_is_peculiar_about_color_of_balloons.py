# Source: https://www.codechef.com/problems/CHN09

t = int(input())
for test in range(t):
    s = input()
    cnt_a = s.count('a')
    cnt_b = len(s) - cnt_a
    print(min(cnt_a,cnt_b))
