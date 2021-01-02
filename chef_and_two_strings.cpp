#include<iostream>
#include<string>
using namespace std;
int main()
{
    int repeat;
    cin >> repeat;
    while(repeat--)
    {
        int min_common=0,max_common=0;
        string s1,s2;
        cin >> s1 >> s2;
        for(int index=0;index<s1.size();index++)
        {
            if(s1[index]=='?' or s2[index]=='?')
                max_common++;
            else if(s1[index]==s2[index])
                min_common++;
        }
        max_common+=min_common;
        cout<<s1.size()-max_common<<" "<<s1.length()-min_common<<endl;
    }
    return 0;
}
