t = int(input())
while(t>0):
    t-=1
    x,y = map(int,input().split())
    x = abs(x)
    y = abs(y)
    sum=0
    a,b = map(int,input().split())
    if(b <= 2*a):
        n = min(x,y)
        sum+=n*b
        x-=n
        y-=n
        n = max(x,y)
        sum+=n*a
    else:
        sum+=(x+y)*a
    print(sum)