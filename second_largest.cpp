#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int repeat,temp;
    cin>>repeat;
    while(repeat--)
    {   
        int *array=new int[3];
        cin>>array[0]>>array[1]>>array[2];
        sort(array,array+3);
        cout<<array[1]<<endl;
    }
    return 0;
}
