#include <bits/stdc++.h>
using namespace std;
bool in(int key, int size, int *array)
{
    for(int index=0; index<size; index++)
        if(key==array[index])
            return true;
    return false;
}
int main() {
    int repeat;
    cin >> repeat;
    while(repeat--)
    {
        int finished, total;
        cin >> total >> finished;
        int finished_jobs[finished], chef[total-finished], assis[total-finished], all_jobs[total-finished];
        for(int index=0; index<finished; index++)
            cin >> finished_jobs[index];
        int number=0;
        for(int index=0; index<total; index++)
        {
            if(in(index+1,finished,finished_jobs)==false)
            {
                all_jobs[number] = index+1;
                number++;
            }
        }
        int flag=0;
        int i1=0, i2=0;
        for(int index=0; index<total-finished; index++)
        {
            if(flag==1)
            {
                assis[i2]=all_jobs[index];
                i2++;
                flag=0;
            }
            else if(flag==0)
            {
                chef[i1]=all_jobs[index];
                i1++;
                flag=1;
            }
        }
        if(i1==0)
            cout <<" "<<"\n"<<" ";
        else
        {
            for(int index=0; index<i1; index++)
                cout <<chef[index]<<" ";
        }
        cout<<endl;
        if(i2==0)
            cout <<" ";
        else
        {
            for(int index=0; index<i2; index++)
                cout <<assis[index]<<" ";
        }
        cout<<endl;
    }
	return 0;
}

