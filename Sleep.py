t = int(input())
while(t>0):
    t-=1
    n,h,m = map(int,input().split())
    check = list()
    for i in range(n):
        x,y = map(int,input().split())
        time = x*60 + y
        check.append(time)
    time = h*60 + m
    check.sort()
    if(check[0] < time <= check[n-1]):
        for i in range(n):
            if(check[i] < time <= check[i+1]):
                time = check[i+1] - time
                break
        h = time//60
        m = time%60
        print("{0} {1}".format(h,m))
    elif(time > check[n-1]):
        time = (1440 - time) + check[0]
        h = time//60
        m = time%60
        print("{0} {1}".format(h,m))
    elif(time <= check[0]):
        time = check[0] - time
        h = time//60
        m = time%60
        print("{0} {1}".format(h,m))
