#include<iostream>
using namespace std;
int main()
{
    long long repeat,a,b,temp;
    cin>>repeat;
    while(repeat--)
    {
        cin>>a>>b;
        cout<<((b/2)*(a/2)+(a-a/2)*(b-(b/2)))<<endl;
    }
    return 0;
}
