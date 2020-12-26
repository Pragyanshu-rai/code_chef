#include<iostream>
#include<math.h>
using namespace std;
bool is_prime(int number)
{
    int last;
    if(number<=1)
        return false;
    if(number<=3)
        return true;
    if(number%2==0)
        return false;
    last=floor(sqrt(number));
    for(int num=3;num<=last;num+=2)
        if(number%num==0)
            return false;
    return true;
}
int main()
{
    int repeat,*array;
    repeat=((int)floor(sqrt(1000000000)))+1;
    array=new int[repeat];
    int index=0;
    for(int number = 3;number<=repeat;number+=2)
    {
        if(is_prime(number)==true)
        {
            array[index]=number;
            index++;
        }    
    }
    cin>>repeat;
    while(repeat--)
    {
        int real,number,last,me=0;
        cin>>number;
        if(number==1)
        {
            cout<<"Grinch"<<endl;
            continue;
        }
        if(is_prime(number)==true)
        {
            cout<<"Me"<<endl;
            continue;
        }
        for(int num=3;num<=number;num+=2)
        {
            //cout<<number<<" "<<num<<endl;
            if(number%num==0)
            {
                number/=num;
                me=(me+1)%2;
                num=1;            
            }
        }
        if(me==1)
            cout<<"Me"<<endl;
        else
            cout<<"Grinch"<<endl;
    }
    return 0;
}
