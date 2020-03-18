# Soource: https://www.codechef.com/problems/KTTABLE

t = int(input())
for test in range(t):
    n = int(input())
    provided_time = list(map(int, input().split()))
    needed_time = list(map(int, input().split()))
    count = 0
    j = 0
    avail = provided_time[0]
    need = needed_time[j]
    j += 1
    for i in range(1,n):
        if(need <= avail):
            count += 1
        need = needed_time[j]
        j += 1
        avail = provided_time[i] - provided_time[i-1]
    if(need <= avail):
        count+=1
    print(count)
