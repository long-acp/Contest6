#include<bits/stdc++.h>

using namespace std;

struct number{
	int val,index;
};

int n,X;

bool compare(number a,number b)
{
	if(abs(X-a.val) != abs(X-b.val)) return (abs(X-a.val) < abs(X-b.val));
	else return (a.index < b.index);
}

int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
		cin>>n>>X;
		number a[n+1];
		for(int i=0;i<n;i++) 
		{
			cin>>a[i].val;
			a[i].index=i;
		}
		sort(a,a+n,compare); 
		for(int i=0;i<n;i++) cout<<a[i].val<<" ";
		cout<<endl;
	}

	return 0;
}

