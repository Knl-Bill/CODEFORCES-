n = int(input())
while(n>0):
    n-=1
    string = input()
    length = len(string)
    if(length<=10):
        print(string)
    else:
        string = string[0] + str(length-2) + string[length-1]
        print(string)
