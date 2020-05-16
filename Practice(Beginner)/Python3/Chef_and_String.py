# Source: https://www.codechef.com/problems/RECNDSTR
for test in range(int(input())):
    s = input()
    left = s[1:] + s[0]
    right = s[-1] + s[:-1]
    print("YES") if(left == right) else print("NO")