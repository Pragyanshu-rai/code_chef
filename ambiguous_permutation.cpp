#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    while(size)
    {
        int array[size],indexs[size];
        bool ambi=true;
        for(int index=0;index<size;index++)
        {
            cin>>array[index];
            indexs[array[index]-1]=index+1;
        }
        for(int index=0;index<size;index++)
        {
            if(array[index]!=indexs[index])
            {
                ambi=false;
                break;
            }
        }
        if(ambi)
            cout<<"ambiguous"<<endl;
        else
            cout<<"not ambiguous"<<endl;
        cin>>size;
    }
    return 0;
}
/*test case input
4
1 4 3 2
5
2 3 4 5 1
1
1
0
-------------------------------------------------------------------------
expected output

ambiguous
not ambiguous
ambiguous
*/
