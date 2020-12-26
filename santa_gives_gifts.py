repeat=int(input())
while repeat>0:
    ap=list()
    numbers=list()
    start,stop,a,d=map(int,input().split())
    for term in range(5):
        ap.append(a+term*d)
    for num in range(start,stop+1):
        if num%ap[0]!=0:
            numbers.append(num)
    for term in range(1,5):
        for num in numbers:
            if num%ap[term]==0:
                numbers.remove(num)
    print(len(numbers))
    repeat-=1
