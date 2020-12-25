#include<iostream>
using namespace std;
long gcd(long first_number,long second_number)
{
    if(first_number == 0)
        return second_number;
    if(second_number == 0)
        return first_number;
    if(first_number>second_number)
        return gcd(first_number%second_number,second_number);
    else
        return gcd(first_number,second_number%first_number);
}
long lcm(long first_number,long  second_number)
{
    return (first_number*second_number)/gcd(first_number,second_number);
}
int main()
{
    long repeat,first_number,second_number;
    cin>>repeat;
    while(repeat--)
    {
        cin>>first_number>>second_number;
        cout<<gcd(first_number,second_number)<<" "<<lcm(first_number,second_number)<<endl;
    }
    return 0;
}
