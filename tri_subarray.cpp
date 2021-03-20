#include<bits/stdc++.h>
using namespace std;
int closest(int key, int *p,int size)
{
	int index=0, start, test, end, closest_so_far=INT_MAX;
	sort(p, p+size);
	while(index < size-1)
	{
		start=index+1;
		end=size-1;
		while(start < end)
		{
			test=p[index]+p[start]+p[end];
			if(test > key)
				end--;
			else
				start++;
			if(abs(key-test) < abs(key-closest_so_far))
			{
				closest_so_far=test;
			}
		}
		index++;
	}
	return closest_so_far;
}
int main()
{
	int size, key;
	cin >> size;
	int array[size];
	for(int index=0; index<size; index++)
		cin>>array[index];
	cin>>key;
	cout<<closest(key, array, size)<<endl;
	return 0;
}
