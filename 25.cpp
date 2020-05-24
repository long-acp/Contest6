#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t=1;
	cin>>t;
	int n,k;
	while(t--)
	{
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		
		sort(a, a + n); 
  
		int j=0;
        while(a[j]==a[j+1]) j++;
        if(j+1<n)
        	cout<<a[0]<<" "<<a[j+1];
		
		else cout<<-1;
	    
	    cout<<endl;
	}

	return 0;
}

