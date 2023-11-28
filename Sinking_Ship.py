n = int(input())
list1 = list()
for i in range(n):
    a,b = input().split()
    list1.append(a)
    list1.append(b)
rats = list()
cw = list()
men = list()
captains = list()
for i in range(1,len(list1),1):
    if(list1[i] == "rat"):
        rats.append(list1[i-1])
    elif(list1[i] == "woman" or list1[i] == "child"):
        cw.append(list1[i-1])
    elif(list1[i] == "man"):
        men.append(list1[i-1])
    elif(list1[i] == "captain"):
        captains.append(list1[i-1])
for i in rats:
    print(i)
for i in cw:
    print(i)
for i in men:
    print(i)
for i in captains:
    print(i)

