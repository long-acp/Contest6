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
		int min_arr=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[min_arr]>a[j]) min_arr=j;
		}
		swap(a[i],a[min_arr]);
		cout<<"Buoc "<<x<<": ";
		for(int z=0;z<n;z++) cout<<a[z]<<" ";
		cout<<endl;
		x++;
	}

	return 0;
}

