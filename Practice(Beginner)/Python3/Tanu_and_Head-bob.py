# Source: https://www.codechef.com/problems/HEADBOB

n = int(input())
for i in range(n):
    a = int(input())
    gestures = input()
    if("Y" in gestures):
        print("NOT INDIAN")
    elif("I" in gestures):
        print("INDIAN")
    else:
        print("NOT SURE")
