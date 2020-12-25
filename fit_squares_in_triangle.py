repeat=int(input())
while repeat>0:
    number=int(input())
    if number<4:
        print(0)
    else:
        num=(number//2)-1
        print((num*(num+1))//2)
    repeat-=1
