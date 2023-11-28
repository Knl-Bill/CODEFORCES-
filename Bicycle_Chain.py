n = int(input())
a = list()
for i in range(n):
    x = int(input())
    a.append(x)
m = int(input())
b = list()
for i in range(m):
    x = int(input())
    b.append(x)
ans = dict()
for i in range(m):
    for j in range(n):
        if(b[i]%a[j] == 0):
            x = b[i]//a[j]
            if(x not in ans):
                ans[x] = 1
            else:
                ans[x]+=1
Max = -1
for i in ans:
    Max = max(Max,i)
print(ans[Max])

