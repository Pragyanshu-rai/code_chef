import string
repeat=int(input())
#encode=dict()
alphabet=string.ascii_lowercase
#for index in range(16):
    #encode[index]=encode.get(index,alphabet[index])
while repeat > 0 :
    output=''
    size=int(input())
    string=input()
    i=0
    j=1
    size/=4
    while size > 0:
        output+=alphabet[int(string[i*4:j*4],2)]
        i+=1
        j+=1
        size-=1
    print(output)
    repeat-=1
