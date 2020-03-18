# Source: https://www.codechef.com/problems/TWOSTR

t = int(input())
for test in range(t):
    s1 = input()
    s2 = input()
    flag = True
    for i in range(len(s1)):
        if(s1[i] != "?" and s2[i] != "?" and s1[i] != s2[i]):
            flag = False
            break
    print("Yes") if(flag) else print("No")
