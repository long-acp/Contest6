#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t=1;
	cin>>t;
	int n,m;
	while(t--)
	{
		cin>>n>>m;
		long long a[n+1],b[m+1];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		
		sort(a,a+n);
		sort(b,b+m);
		cout<<a[n-1]*b[0]<<endl;
	}

	return 0;
}

