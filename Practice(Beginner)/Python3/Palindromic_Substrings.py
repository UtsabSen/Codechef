# Source: https://www.codechef.com/problems/STRPALIN


def isPalindromePossible(s1, s2):
    for i in s1:
        if(i in s2):
            return True
    return False


t = int(input())

for test in range(t):
    s1 = input()
    s2 = input()
    print("Yes") if(isPalindromePossible(s1, s2)) else print("No")