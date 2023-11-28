t = int(input())
while(t>0):
    t-=1
    n = int(input())
    s = input()
    lst = list()
    sum = 0
    for i in s:
        if(i in lst):
            sum+=1
        else:
            lst.append(i)
            sum+=2
    print(sum)