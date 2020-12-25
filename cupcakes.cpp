#include<iostream>
using namespace std;
int main()
{
    int repeat,cupcakes;
    cin>>repeat;
    while(repeat--)
    {
        cin>>cupcakes;

        //if the cupcake package size is 1 more than the integer half of the number then 
        //it will be size which ensures max leftover cupcakes 
     
        cout<<(cupcakes/2)+1<<endl;
    }
    return 0;
}
