#include<iostream>
using namespace std;
int main()
{
    int repeat;
    cin >> repeat;
    while(repeat--)
    {
        int coins,people,max=-1;
        cin >> coins >> people;
        if(people>coins)
        {
            cout<<coins<<endl;
            continue;
        }
        if(people==1)
            max=0;
        else if(people>coins)
            max=coins;
        else
        {
            for(;people>0;people--)
                if(coins%people>max)
                    max=coins%people;
        }
        cout<<max<<endl;
    }
}
