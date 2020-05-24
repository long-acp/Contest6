#include<bits/stdc++.h>

using namespace std;

int a[1005],n;

int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int x=0,y=n-1;
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				cout<<a[y]<<" ";
				y--;
			}
			else
			{
				cout<<a[x]<<" ";
				x++;
			}
		}
		cout<<endl;
	}

	return 0;
}

