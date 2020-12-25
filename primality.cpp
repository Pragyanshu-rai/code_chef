#include<iostream>
#include<cmath>
#include<string>
using namespace std;
string is_prime(int number)
{
    int last;
    if(number<=1)
        return "no";
    if(number<=3)
        return "yes";
    if(number%2==0)
        return "no";
    last=(int)floor(sqrt(number));
    for(int num=3;num<=last+1;num+=2)
        if(number%num==0)
            return "no";
    return "yes";
}
int main()
{
    int repeat,number;
    cin>>repeat;
    while(repeat--)
    {
        cin>>number;
        cout<<is_prime(number)<<endl;
    }
    return 0;
} 
