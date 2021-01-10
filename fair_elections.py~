repeat=int(input())
while repeat>0 :
    swaps=0
    n,m=map(int, input().split())
    john=list(map(int, input().split()))
    jack=list(map(int, input().split()))
    if sum(jack)<sum(john):
        swaps=0
    elif sum(jack) > sum(john):
        john.sort()
        jack.sort(reverse=True)
        if n>m:
            n=m
        while sum(jack) >= sum(john) and swaps < n:
            jack[swaps],john[swaps]=john[swaps],jack[swaps]
            swaps+=1
        if sum(jack) >= sum(john):
            swaps=-1
    print(swaps)
    repeat-=1

