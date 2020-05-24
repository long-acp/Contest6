#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int x=1;
	
	for(int i=0;i<n;i++)
	{
		int kq=1;
		for(int j=0; j<n-i-1; j++ ) 
		{
			if (a[j] > a[j+1] )
			{
				swap(a[j],a[j+1]);
				kq=0;
			}
		
		}
		if(kq==1) break;
		cout<<"Buoc "<<x<<": ";
		for(int z=0;z<n;z++) cout<<a[z]<<" ";
		cout<<endl;
		x++;
	}

	return 0;
}

