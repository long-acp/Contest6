#include<bits/stdc++.h>

using namespace std;

int hoandoi(int arr[], int l,int r) 
{ 
	int x=arr[r];
	int i=l-1;
	for(int j=l;j<r;j++)
	{
		if(arr[j]<x)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[r]);
	return i+1;
} 
void QuickSort(int arr[], int l, int r) 
{ 
	if (l < r) 
	{ 
		int m = hoandoi(arr,l,r);  
		QuickSort(arr, l, m-1); 
		QuickSort(arr, m+1, r);  
	} 
} 

int main()
{
	int t=1;
	cin>>t;
	int n,K;
	while(t--)
	{
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		
		QuickSort(a,0,n-1);
		
		//sort(a,a+n);
		
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}

	return 0;
}

