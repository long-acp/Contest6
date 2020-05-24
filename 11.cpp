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
		
		int ans = INT_MAX;
		
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if( abs(a[i]+a[j]) < abs(ans)) ans = a[i]+a[j] ;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}

