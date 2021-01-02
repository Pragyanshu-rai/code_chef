from math import sqrt;
repeat=int(input())
while repeat>0 :
    output="no"
    x_axis=list()
    y_axis=list()
    count=0
    xy_range=int(input())
    for cycle in range(3):
        x,y=map(int,input().split())
        x_axis.append(x)
        y_axis.append(y)
    i=0
    j=1
    while i<3:
        if sqrt(((x_axis[i]-x_axis[j])**2)+((y_axis[i]-y_axis[j])**2)) <= xy_range:
            count+=1
        i+=1
        j=(j+1)%3
    if count>=2:
        output="yes"
    print(output)
    repeat-=1
