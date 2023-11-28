t = int(input())
while(t>0):
    t-=1
    n = int(input())
    str1 = input()
    list1 = ['T','i','m','u','r']
    list1.sort()
    list2 = list(str1)
    list2.sort()
    if(list1 == list2):
        print("YES")
    else:
        print("NO")
        