#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll a[100005];

void merge(ll arr[], ll l, ll m, ll r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	ll L[n1], R[n2]; 

	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1+ j]; 
	i = 0; // Initial index of first subarray 
	j = 0; // Initial index of second subarray 
	k = l; // Initial index of merged subarray 
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 
void mergeSort(ll arr[], int l, int r) 
{ 
	if (l < r) 
	{ 
		int m = l+(r-l)/2;  
		mergeSort(arr, l, m); 
		mergeSort(arr, m+1, r); 
		merge(arr, l, m, r); 
	} 
} 

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	
	mergeSort(a,0,n-1);
	
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;

	return 0;
}

