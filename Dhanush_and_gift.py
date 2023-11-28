t = int(input())
while(t>0):
    t-=1
    time1x,time1y = input().split(':')
    time1x = float(time1x)
    time1y = float(time1y)
    time2x,time2y = input().split(':')
    time2x = float(time2x)
    time2y = float(time2y)
    dist = float(input())
    timediffy = time1y - time2y
    timediffx = 0
    if(timediffy < 0):
        time1y += 60
        time1x-=1
        timediffy = time1y - time2y
        timediffx = time1x - time2x
    else:
        timediffx = time1x - time2x
        timediffy = time1y - time2y
    planA = timediffx*60 + timediffy + dist
    if(dist*2 <= timediffx*60 + timediffy):
        timediff = 0
    else:
        temp = timediffx*60 + timediffy - dist
        rem_distance = dist - temp
        timediff = rem_distance/2
    planB = timediffx*60 + timediffy + timediff
    print(round(planA,1),round(planB,1))





