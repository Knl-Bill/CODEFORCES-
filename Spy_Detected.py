t = int(input())
ans = 0
while(t>0):
    t = t - 1
    n = int(input())
    a = dict()
    ai = 1
    for i in range(1,n+1):
        bi = int(input())
        a[ai] = bi
        ai+=1
    count = dict()
    for i in a:
        if a[i]  not in count:
            count[a[i]] = 1
        else:
            count[a[i]]+=1
    max = -1
    index = 0
    for i in count:
        if(max<count[i]):
            max = count[i]
            index = i
    for i in a:
        if(a[i] != index):
            ans = i
            break
else:
    print(ans)
