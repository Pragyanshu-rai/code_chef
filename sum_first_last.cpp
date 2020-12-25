#include<iostream>
using namespace std;
int main()
{
    int repeat,number,first_bit,last_bit;
    cin>>repeat;
    while(repeat--)
    {
        cin>>number;
        last_bit=number%10;
        while(number > 0)
        {
            first_bit=number%10;
            number/=10;
        }
        cout<<first_bit+last_bit<<endl;
    }
    return 0;
}
