# Source: https://www.codechef.com/problems/PRB01

def isPrime(num):
    for i in range(2,int(num**0.5)):
        if(num%i == 0):
            return False
    return True

n = int(input())
for i in range(n):
    x = int(input())
    if(isPrime(x)):
        print("yes")
    else:
        print("no")
