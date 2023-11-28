t = int(input())
while(t>0):
    t-=1
    n = int(input())
    str1 = input()
    str1 = list(str1)
    str2 = input()
    str2 = list(str2)
    for i in range(0,n):
        if(str1[i] == 'G'):
            str1[i] = 'B'
        if(str2[i] == 'G'):
            str2[i] = 'B'
    if(str1 == str2):
        print("YES")
    else:
        print("NO")
        