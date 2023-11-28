t = int(input())
while(t>0):
    t-=1
    time1x,time1y = map(float,(input().split(':')))
    time2x,time2y = map(float,(input().split(':')))
    dist = float(input())
    PlanA = (time1x-time2x)*60 + abs(time1y-time2y) + dist
    PlanB = (time1x-time2x)*60 + abs(time1y-time2y) if(dist*2 <= (time1x - time2x)*60 + abs(time1y - time2y)) else (time1x-time2x)*60 + abs(time1y-time2y) + (dist - ((time1x-time2x)*60 + abs(time1y-time2y) - dist))/2
    print(round(PlanA,1),round(PlanB,1))