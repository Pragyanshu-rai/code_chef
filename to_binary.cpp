#include<iostream>
using namespace std;
int to_binary(int number)
{
    int count=0;
    while(number)
    {
        if(number%2==1)
            count++;
        number/=2;
    }
    return count;
}
int main()
{
    int repeat,number,main_count;
    cin>>repeat;
    while(repeat--)
    {
        main_count=0;
        cin>>number;
        while(number>2048)
        {
            number-=2048;
            main_count++;
        }
        cout<<main_count+to_binary(number)<<endl;
    }
    return 0; 
}
