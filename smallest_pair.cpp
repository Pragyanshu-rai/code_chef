#include<iostream>
using namespace std;
long *array;
long size;
class SuperSort
{
    public :
        void supersort()
        {
            if(size<=15)
            {
                cout<<"Bubble sort !!!"<<endl;
                bubblesort();            
            }     
            else
            {
                cout<<"Merge sort !!!"<<endl;
                mergesort(0,size-1);            
            }
        }
        void bubblesort()
        {
            for(int index=0;index<size-1;index++)
            {
                for(int pointer=index+1;pointer<size;pointer++)
                {
                    if(array[index]>array[pointer])
                    {
                        array[index]=array[index]*array[pointer];
                        array[pointer]=array[index]/array[pointer];
                        array[index]=array[index]/array[pointer];    
                    }                
                }            
            }    
        }
        void mergesort(int low, int high)
        {
            if(low<high)
            {
                int mid=(low+high)/2;
                mergesort(low,mid);
                mergesort(mid+1,high);
                merge(low,mid,high);            
            }        
        }
        void merge(int low, int mid, int high)
        {
            int i=low,j=mid+1,k=low;
            long temp[high+1];
            while(i<=mid && j<=high)
            {
                if(array[i]<array[j])
                    temp[k++]=array[i++];
                else
                    temp[k++]=array[j++];            
            }
            for(;i<=mid;)
                temp[k++]=array[i++];
            for(;j<=high;)
                temp[k++]=array[j++];
            for(i=low;i<=high;i++)
                array[i]=temp[i];
        }
};
int main()
{
    SuperSort ss;
    int repeat;
    cin >> repeat;
    while(repeat--)
    {
        cin >> size;
        array = new long[size];
        for(int index=0;index<size;index++)
        {
            cin >> array[index];
        }
        ss.supersort();
        cout<<array[0]+array[1]<<endl;
        delete[] array;
    }
    return 0;
}
