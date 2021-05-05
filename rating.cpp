#include<iostream>
#include<set>
#include<map>
using namespace std;
int main()
{
    int repeat;
    cin >> repeat;
    while(repeat--)
    {
        int n, x;
        cin >> n >> x;
        //set<int, greater> r;
        map<int, int, greater<int>> movies;
        for(int index=0; index<n; index++)
        {
            int s, r;
            cin >> s >> r;
            movies[r] = s;
        }
        for(pair<int, int> p : movies)
        {
            if(p.second <= x)
            {
                cout<<p.first<<endl;
                break;
            }
        }
    }
    return 0;
}
