#include<bits/stdc++.h>
#include<string>
#include<iterator>
#include<algorithm>
#include<map>
using namespace std;
string count(string word)
{
    map<char, int> occur;
    map<char, int>::iterator keys;
    for(char letter : word)
    {
        occur[letter]++;
    }
    int same_occur[occur.size()];
    int index=0,max=-1,sum=0;
    for(keys=occur.begin();keys!=occur.end();keys++,index++)
    {
        same_occur[index]=keys->second;
    }
    //max=max_element(same_occur,same_occur+(occur.size()));
    //sort(same_occur,same_occur+(occur.size()));
    for(index=0;index<occur.size();index++)
    {
        sum+=same_occur[index];
        if(max<same_occur[index])
            max=same_occur[index];
    }
    if(max==sum-max)
        return "YES";
    return "NO";
}
int main()
{
    int repeat;
    cin >> repeat;
    while(repeat--)
    {
        string word;
        cin >> word;
        cout << count(word) << endl;
    }
    return 0;
}
