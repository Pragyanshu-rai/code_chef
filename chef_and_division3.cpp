#include<iostream>
using namespace std;
int main()
{
    int repeat;
    cin >> repeat;
    while(repeat--)
    {
        int problems=0,days,setters,max_problems,done_days;
        cin >> setters >> max_problems >> days;
        while(setters--)
        {
            int temp;
            cin >> temp;
            problems += temp;        
        }
        //cout<<problems<<endl;
        if(problems < max_problems)
            done_days=0;
        else
            done_days=problems/max_problems;
        if(done_days>days)
            done_days=days;
        cout<<done_days<<endl;
    }
    return 0;
}
