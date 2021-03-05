#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int repeat;
	cin >> repeat;
	while(repeat--)
	{
	    int size;
	    cin >> size;
	    int playlist[size];
	    for(int index =0; index<size; index++)
	        cin >> playlist[index];
	    int pos;
	    cin >> pos;
	    pos = playlist[pos-1];
	    sort(playlist, playlist+size);
	    for(int index=0; index<size; index++)
	        if(pos==playlist[index])
	            cout << index+1 << endl;
	}
	return 0;
}

