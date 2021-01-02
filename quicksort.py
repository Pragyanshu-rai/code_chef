print("Enter the elements of the array")
array=list(map(int,input().split()))
size=len(array)
def part(low,high):
    pivot=(low+high)//2
    while array[low]<array[pivot]:
        low+=1
    while array[high]>array[pivot]:
        high-=1
    if low<high:
        array[low],array[high]=array[high],array[low]
    else:
        array[high],array[pivot]=array[pivot],array[high]
    return high
def quicksort(low,high):
    if low<high:
        new_high=part(low,high)
        quicksort(low,new_high)
        quicksort(new_high+1,high)
quicksort(0,size-1)
print(array)
