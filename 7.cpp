#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t=1;
	cin>>t;
	int n,m;
	while(t--)
	{
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		
		for(int i=0;i<n;i++)
		{
			int kq=1;
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j]) kq=0;
			}
			if(kq==0)
			{
				cout<<i+1<<" ";
				break;
			}
		}
		
		for(int i=n-1;i>=0;i--)
		{
			int kq=1;
			for(int j=i-1;j>=0;j--)
			{
				if(a[i]<a[j]) kq=0;
			}
			if(kq==0)
			{
				cout<<i+1<<" ";
				break;
			}
		}
		cout<<endl;
	}

	return 0;
}

