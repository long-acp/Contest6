#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int x=1;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j]) swap(a[i],a[j]);
		}
		cout<<"Buoc "<<x<<": ";
		for(int z=0;z<n;z++) cout<<a[z]<<" ";
		cout<<endl;
		x++;
	}

	return 0;
}
