from time import time
test_case=int(input())
for test in range(test_case):
    line = input()
    line=line.strip().split(" ")
    k=int(line[1])
    array=list(map(int,input().split()))
    carry=0
    cur=time()
    for index in range(len(array)):
        array[index]+=carry
        if array[index]<k:
            print(index+1)
            break
        else:
            carry=array[index]-k
    if carry>k:
        carry=carry//k
        print(carry+1+len(array))
    print("%.8f" % float(time()-cur))#to check the time taken by the code to execute
