# Source: https://www.codechef.com/problems/CCOOK

t = int(input())
for test in range(t):
    l = list(map(int, input().split()))
    c = l.count(1)
    if(c == 0):
        print("Beginner")
    elif(c == 1):
        print("Junior Developer")
    elif(c == 2):
        print("Middle Developer")
    elif(c == 3):
        print("Senior Developer")
    elif(c == 4):
        print("Hacker")
    elif(c == 5):
        print("Jeff Dean")
