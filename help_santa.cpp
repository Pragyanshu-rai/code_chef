#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int array[size];
    for(int index=0;index<size;index++)
        cin>>array[index];
    sort(array,array+size);
    for(int index=0;index<size;index++)
        if(array[index]>0 && array[index]<31)
        {
            if(index==0)
                cout<<array[index]<<" ";
            else if(array[index-1]!=array[index])
                cout<<array[index]<<" ";
        }
    cout<<endl;
    return 0;
}
//test case input
/*
12                                                                                                                                                                                                                                                                                                                 
2 3 7 5 5 2 8 1 4 6 6 6
*/
