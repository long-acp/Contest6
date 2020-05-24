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
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		
		sort(a,a+n);
		int m=0;
		
		for(int i=0;i<n;i++)
		{
			if(a[i]!=a[i+1]) m++;
		}
		if(a[n-1]==a[0]) cout<<0<<endl;
		else cout<<a[n-1]-a[0]-m+1<<endl;
	}

	return 0;
}

