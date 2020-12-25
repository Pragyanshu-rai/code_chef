import math
def isprime(number):
    if number<=1:
        return False
    if number<=3:
        return True
    if number%2==0:
        return False
    last=math.floor(math.sqrt(number))
    for num in range(3,last+1,2):
        if number%num==0:
            return False
    return True
def ispal(string):
    if string == string[::-1]:
        return True
    return False
repeat=int(input())
while repeat>0:
    number=int(input())
    if ispal(str(number)) and isprime(number):
        print("Yes")
    else :
        print("No")
    repeat-=1
test_input="""
6
6
151
383
65266
9889
797
"""
