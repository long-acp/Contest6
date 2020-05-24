#include<bits/stdc++.h>
#define ll long long

using namespace std;

struct number{
	int val;
	int index;
};


bool compare(number P1,number P2)
{
	if(P1.index!=P2.index) return P1.index>P2.index;
	else return P1.val<P2.val;
}

int main()
{
	int t=1;
	cin>>t;
	int n,k;
	while(t--)
	{
		cin>>n;
		int a[n+1];
		number P[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		
		sort(a, a + n); 
		
		int x=0;
  
	    for (int i = 0; i < n; ) 
		{  
			int j=i;
			P[x].val=a[i];
			P[x].index=1;
	        while(a[j]==a[j+1])
	        {
	        	P[x].index++;
	        	j++;
			}
	        x++;
	        i=j+1;
	    } 
	    sort(P,P+x,compare);
	    for(int i=0;i<x;i++)
	    {
	    	for(int j=0;j<P[i].index;j++) cout<<P[i].val<<" ";
		}
	    cout<<endl;
	}

	return 0;
}

