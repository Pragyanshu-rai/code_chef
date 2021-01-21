#include<iostream>
using namespace std;
int main()
{
    int repeat;
    cin >> repeat;
    while(repeat--)
    {
        int size,count=0;
        cin >> size;
        int timings[size+1];
        timings[0]=0;
        int time[size];
        for(int index=1;index<=size;index++)
            cin >> timings[index];
        for(int index=0;index<size;index++)
            cin >> time[index];
        for(int index=1;index<=size;index++)
            if((timings[index]-timings[index-1])>=time[index-1])
                count++;
        cout << count << endl;
    }
    return 0;
}
