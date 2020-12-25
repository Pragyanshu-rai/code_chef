numbers,key=map(int,input().split())
result=0
while numbers > 0:
    number=int(input())
    if number % key == 0:
        result+=1
    numbers-=1
print(result)
