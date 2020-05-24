#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t=1;
	cin>>t;
	int n,K;
	while(t--)
	{
		cin>>n>>K;
		int a[n+1],ans=0;
		for(int i=0;i<n;i++) 
		{
			cin>>a[i];
			if(a[i]==K) ans++;
		}
		if(ans==0) cout<<-1<<endl;
		else cout<<ans<<endl;
		
	}

	return 0;
}

