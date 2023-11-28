t = int(input())
while(t>0):
    t-=1
    str1 = input()
    dict1 = {}
    index = 1
    for i in range(0,len(str1)):
        dict1[str1[i]] = index
        index+=1
    str2 = input()
    sum = 0
    for i in range(0, len(str2)-1):
        sum+=abs(dict1[str2[i+1]] - dict1[str2[i]])
    print(sum)
