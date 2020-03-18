# Source: https://www.codechef.com/problems/HS08TEST

w,a = map(float,input().split())
if(int(w)%5 == 0 and 0 < w < (a-0.50)):
    w += 0.50
else:
    w = 0.0
print('{0:.2f}'.format(a-w))
