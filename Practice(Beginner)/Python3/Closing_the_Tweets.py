# Source: https://www.codechef.com/problems/TWTCLOSE

tweet, n = map(int, input().split())
l = [0]*tweet
for i in range(n):
    s = str(input())
    if(s == "CLOSEALL"):
        l = [0]*tweet
    else:
        if(l[int(s[5:])-1] == 0):
            l[int(s[5:])-1] = 1
        else:
            l[int(s[5:])-1] = 0
    print(l.count(1))
