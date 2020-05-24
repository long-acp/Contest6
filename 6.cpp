#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t=1;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		int a[n+1];
		int x0=0,x1=0,x2=0;
		for(int i=0;i<n;i++) 
		{
			cin>>a[i];
			if(a[i]==0) x0++;
			else if (a[i]==1) x1++;
			else x2++;
		}
		while(x0--) cout<<0<<" ";
		while(x1--) cout<<1<<" ";
		while(x2--) cout<<2<<" ";
		cout<<endl;
	}

	return 0;
}

