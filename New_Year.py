a,b,c = input().split()
list1 = []
list1.append(int(a))
list1.append(int(b))
list1.append(int(c))
list1.sort()
print((list1[1]-list1[0]) + (list1[2]-list1[1]))

