#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,offset=0;
    cin>>size;
    int array[size*2][size*2];
    memset(array,0,sizeof(array[0][0])*size*2*size*2);
    for(offset=0;offset<size;offset++)
        for(int row=0;row<(size*2-1);row++)
            for(int column=0;column<(size*2-1);column++)
                if((array[row][column]==0)&&(row==offset||column==offset||row==size*2-2-offset||column==size*2-2-offset))
                    array[row][column]=size-offset;
    for(int row=0;row<(size*2-1);row++)
    {
        for(int column=0;column<(size*2-1);column++)
        {
            cout<<array[row][column]<<" ";
        }
        cout<<endl;
    }
}
//test cases input
/*
4
*/
