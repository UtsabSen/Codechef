# Source: https://www.codechef.com/problems/COMM3

t = int(input())
for test in range(t):
    rng = int(input())
    ax, ay = map(int,input().split())
    bx, by = map(int,input().split())
    cx, cy = map(int,input().split())
    dis_ab = (abs(ax-bx)**2 + abs(ay-by)**2)**0.5
    dis_bc = (abs(bx-cx)**2 + abs(by-cy)**2)**0.5
    dis_ca = (abs(cx-ax)**2 + abs(cy-ay)**2)**0.5
    if((dis_ab <= rng and dis_bc <= rng) or (dis_bc <= rng and dis_ca <= rng) or (dis_ca <= rng and dis_ab <= rng)):
        print("yes")
    else:
        print("no")
