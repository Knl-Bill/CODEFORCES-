n = int(input())
m = n
while(n>0):
    if(n>0 and n==1 and m%2 == 0):
        print("I love it ",end='')
        n-=1
    if(n>0 and n==1 and m%2 == 1):
        print("I hate it ",end='')
        n-=1
    if(n>1):
        print("I hate that ",end='')
        n-=1
    if(n>1):
        print("I love that ",end='')
        n-=1
    