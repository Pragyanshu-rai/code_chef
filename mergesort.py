import time
print("Enter the elements of the array")
array=list(map(int,input().split()))
size=len(array)
def merge(low,mid,high):
    temp=[0 for x in range(high+1)]
    i=low
    j=mid+1
    k=low
    while i<=mid and j<=high:
        if array[i]>array[j]:
            temp[k]=array[j]
            k+=1
            j+=1
        else:
            temp[k]=array[i]
            k+=1
            i+=1
    while i<=mid:
        temp[k]=array[i]
        k+=1
        i+=1
    while j<=high:
        temp[k]=array[j]
        k+=1
        j+=1
    for index in range(low,high+1):
        array[index]=temp[index]
def mergesort(low,high):
    if low<high:
        mid=(low+high)//2
        mergesort(low,mid)
        mergesort(mid+1,high)
        merge(low,mid,high)
mergesort(0,size-1)
print(array)
