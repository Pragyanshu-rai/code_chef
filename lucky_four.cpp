#include<iostream>
using namespace std;
int main()
{
    int total_numbers,number,occurrence;
    cin>>total_numbers;
    while(total_numbers)
    {
        cin>>number;
        occurrence=0;
        while(number>0)
        {
            if(number%10==4)
                occurrence++;
            number/=10;
        }
        cout<<occurrence<<endl;
    }
    return 0;
}
