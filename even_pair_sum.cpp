#include<iostream>
using namespace std;
int even_sum_count(int first_number,int second_number)
{
    int count=0;
    for(int number1=1;number1<=first_number;number1++)
    {
        if(number1%2==1)
        {
            for(int number2=1;number2<=second_number;number2+=2)
            {
                if((number1+number2)%2==0)
                {
                    count++;    
                }
            }
        }
        else if(number1 %2==0)
            for(int number2=2;number2<=second_number;number2+=2)
            {
                if((number1+number2)%2==0)
                {
                    count++;    
                }
            }
    }
    return count;
}
int main()
{
    int repeat,first_number,second_number;
    cin>>repeat;
    while(repeat--)
    {
        cin>>first_number>>second_number;
        cout<<even_sum_count(first_number,second_number)<<endl;
    }
    return 0;
}
