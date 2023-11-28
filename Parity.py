b,k = map(int,input().split())
a = list(map(int,input().split()))
ans = 0
for i in range(len(a)):
    ans+= a[i] * b**(k-i-1)
if(ans%2 == 0):
    print("even")
else:
    print("odd")
