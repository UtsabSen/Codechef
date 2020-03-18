# Source: https://www.codechef.com/problems/ONP

t = int(input())
for test in range(t):
    s = input()
    opt = []
    res = []
    for i in range(len(s)):
        if(s[i] == '('):
            opt.append(s[i])
        elif(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' or s[i] == '^'):
            opt.append(s[i])
        elif(s[i] == ')'):
            res.append(opt[len(opt)-1])
            del(opt[len(opt)-1])
            del(opt[len(opt)-1])
        else:
            res.append(s[i])
    for j in res:
        print(j,end="")
    print()
