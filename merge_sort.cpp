#include<iostream>
#include<time.h>
using namespace std;
int *array;
void merge(int low,int mid,int high)
{
    int i=low,j=mid+1,k=low;
    int temp[high+1];
    while(i<=mid && j<=high)
    {
        if(array[i]>array[j])
            temp[k++]=array[j++];
        else
            temp[k++]=array[i++];
    }
    for(;i<=mid;i++,k++)
        temp[k]=array[i];
    for(;j<=high;j++,k++)
        temp[k]=array[j];
    for(i=low;i<=high;i++)
        array[i]=temp[i];
}
void merge_sort(int low,int high)
{
    if(low<high)
    {
        int mid = (low+high)/2;
        merge_sort(low,mid);
        merge_sort(mid+1,high);
        merge(low,mid,high);    
    }
}
int main()
{
    clock_t time;
    int size;
    cout<<"Enter the size of the array \n>>";
    cin>>size;
    array=new int[size];
    cout<<"Enter the elements of the array"<<endl;
    for(int index=0;index<size;index++)
        cin>>array[index];
    time=clock();
    merge_sort(0,size-1);
    time=(clock()-time)/(double)CLOCKS_PER_SEC;
    for(int index=0;index<size;index++)
        cout<<array[index]<<" ";
    cout<<endl;
    cout<<time<<endl;
    return 0;
}
