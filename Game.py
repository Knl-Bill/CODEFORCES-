t = int(input())
while(t>0):
    t-=1
    s = input()
    lst = list(s)
    status = True
    count = 0
    while(status):
        
        if(('01' in s) or ('10' in s) ):
            for i in range(1,len(s)):
                if((s[i-1] == '0' and s[i] == '1') or (s[i-1] == '1' and s[i] == '0')):
                    count+=1
                    s = s[:i-1] + s[i+1:]
                    break
        else:
            status = False    
    if(count%2 == 1):
        print("DA")
    else:
        print("NET")

            
