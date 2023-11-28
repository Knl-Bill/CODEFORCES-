t = int(input())
while(t>0):
    t-=1
    m = int(input())
    ans = dict()
    while(m>0):
        m-=1
        check = list()
        n = int(input())
        day = list(map(int,input().split()))
        for i in day:
            if i not in ans:
                ans[i] = 1
            else:
                ans[i]+=1
    check = False
    for i in ans:
        if(ans[i] == 1):
            print(i,"",end='')
            check = True
    if(not check):
       print(-1)
