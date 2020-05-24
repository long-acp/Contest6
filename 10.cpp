#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t=1;
	cin>>t;
	int n,m;
	int arr[10];
	while(t--)
	{
		memset(arr,0,sizeof(arr));
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++) 
		{
			cin>>a[i];
			while(a[i]>0)
			{
				arr[a[i]%10]++;
				a[i]/=10;
			}
		}
		for(int i=0;i<10;i++)
			if(arr[i]!=0) cout<<i<<" ";
		cout<<endl;
	}

	return 0;
}

