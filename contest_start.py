k = int(input())
for i in range(k):
    n,x,t = map(int,input().split())
    d = t//x
    print(int((n*d - d*(d+1)/2)))
    print(int(d*(2*n-d-1)/2))
