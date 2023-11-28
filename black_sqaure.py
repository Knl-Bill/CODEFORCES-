a,b,c,d = input().split()
str1 = input()
sum = 0
n = len(str1)
for i in range(0,n):
    if(str1[i] == '1'):
        sum += int(a)
    elif(str1[i] == '2'):
        sum += int(b)
    elif(str1[i] == '3'):
        sum += int(c)
    elif(str1[i] == '4'):
        sum += int(d)
print(sum)
