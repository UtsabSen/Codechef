# Source: https://www.codechef.com/problems/TALAZY
t = int(input())
for test in range(t):
    n, b, m = map(int, input().split())
    time = 0
    while n > 0:
        if n % 2 == 0:
            time += (n // 2) * m + b
            n //= 2
        else:
            time += ((n + 1) // 2) * m + b
            n = (n - 1) // 2
        m *= 2
    print(time - b)
