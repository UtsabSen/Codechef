# Source: https://www.codechef.com/problems/AREAPERI

l = int(input())
b = int(input())

if(l*b > 2*(l+b)):
    print("Area\n"+str(l*b))
elif(l*b < 2*(l+b)):
    print("Peri\n"+str(2*(l+b)))
else:
    print("Eq\n"+str(l*b))
