# Source: https://www.codechef.com/problems/AMR15A

n = int(input())
l = list(map(int,input().split()))
evn,odd = 0,0
for i in l:
    if(i%2==0):
        evn += 1
    else:
        odd += 1
if(evn > odd):
    print("READY FOR BATTLE")
else:
    print("NOT READY")
