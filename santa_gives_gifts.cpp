#include<iostream>
using namespace std;
int main()
{
    long long repeat;
    long long AP[5];
    cin>>repeat;
    while(repeat--)
    {
        long long start,stop,a,d,count=0,False=0;
        cin>>start>>stop>>a>>d;
        for(long long term=0;term<5;term++)
            AP[term]=a+(term*d);
        while(start<=stop)
        {
            if(start%AP[0]!=0 && start%AP[1]!=0 && start%AP[2]!=0 && start%AP[3]!=0 && start%AP[4]!=0)
                count++;
            start++;
        }
        cout<<count<<endl;
    }
    return 0;
}
