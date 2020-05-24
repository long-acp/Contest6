#include<bits/stdc++.h>

using namespace std;

bool compare(int x,int y){return (x>y);}

int main()
{
	int t=1;
	cin>>t;
	int n,K;
	while(t--)
	{
		cin>>n>>K;
		int a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		
		sort(a,a+n,compare);
		for(int i=0;i<K;i++) cout<<a[i]<<" ";
		cout<<endl;
		
	}

	return 0;
}

