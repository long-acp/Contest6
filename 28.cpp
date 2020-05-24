#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int key,j;
	
	for(int i=0;i<n;i++)
	{ 
		key = a[i];
		j = i-1;
		while (j >= 0 && a[j] > key) 
		{   
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = key; 
		cout<<"Buoc "<<i<<": ";
		for(int z=0;z<=i;z++) cout<<a[z]<<" ";
		cout<<endl;
	}


	return 0;
}

