#include<iostream>
using namespace std;
int sum(int times,int number)
{
    if(times==1)
        return number*(number+1)/2;
    number=sum(times-1,number);
    return number*(number+1)/2;
}
int main()
{
    int repeat;
    cin>>repeat;
    while(repeat--)
    {
        int times,number;
        cin>>times>>number;
        cout<<sum(times,number)<<endl;
    }
}
