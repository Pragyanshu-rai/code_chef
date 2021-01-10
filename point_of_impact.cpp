#include<iostream>
using namespace std;
int main()
{
    long long repeat;
    cin >> repeat;
    while(repeat--)
    {
        long long ball[2]={0,0},collision=0,max_collision,limit,x_flag=1,y_flag=1;
        cin >> limit >> max_collision >> ball[0] >> ball[1];
        while(!((ball[0]==0 && ball[1]==0)||(ball[0]==0 && ball[1]==limit)||(ball[0]==limit && ball[1]==0)||(ball[0]==limit && ball[1]==limit)))
        {
            if(ball[0] == limit || ball[0] == 0)
                x_flag=-x_flag;            
            if(ball[1] == limit || ball[1] == 0)
                y_flag=-y_flag;    
            ball[0]+=x_flag;
            ball[1]+=y_flag;
            if(ball[0] == limit || ball[0] == 0)
                collision++;            
            if(ball[1] == limit || ball[1] == 0)
                collision++; 
            //cout << ball[0] << " " << ball[1] <<" "<<collision<<endl;
            if(collision >= max_collision)
                break;
        }
        cout << ball[0] << " " << ball[1] << endl;
    }
    return 0;
}
