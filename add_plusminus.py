t = int(input())
while(t>0):
    t-=1
    n = int(input())
    str1 = []
    str2 = []
    sum = 0
    for i in range(0,n):
        a = input()
        str1.append(a)
    for i in range(0,n-1):
        print("In the for loop")
        sum += int(str1[i])
        print(sum)
        if(str1[i] == '0' and str1[i+1] == '0'):
            str2.append('+')

            print("In the if")
        elif((sum+int(str1[i+1])) == 1 and (str1[i] == '0' and str1[i+1] == '1')):
            str2.append('-')
            sum-=1
            print("In the elif")
        elif((sum+int(str1[i+1])) == 1 and (str1[i] == '1' and str1[i+1] == '0')):
            str2.append('-')
            sum-=1
            print("In the elif")
        elif((sum+int(str1[i+1])) == 0 and (str1[i] == '1' and str1[i+1] == '0')):
            str2.append('+')
            print("In the elif")
        elif((sum+int(str1[i+1])) == 0 and (str1[i] == '0' and str1[i+1] == '1')):
            str2.append('+')
            print("In the elif")
        elif(str1[i] == '1' and str1[i+1] == '1'):
            str2.append('-')
            sum-=2
            print("In the elif")
    print(str2)