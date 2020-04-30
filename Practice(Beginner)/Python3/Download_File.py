# Source: https://www.codechef.com/problems/DWNLD

t = int(input())
for test in range(t):
    t, k = map(int,input().split())
    time = []
    data = []
    for i in range(t):
        temp1, temp2 = map(int, input().split())
        time.append(temp1)
        data.append(temp2)
    s = 0
    for i in range(t):
        if(time[i] <= k):
            k -= time[i];
        else:
            time[i] -= k;
            k = 0;
            s += time[i] * data[i];
    print(s)