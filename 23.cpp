#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2;  
        if (arr[mid] == x) 
            return 1;  
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x);  
        return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
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
		
		long long sum=0;
		
		for(int i=0;i<n-1;i++) 
		{
			cin>>a[i];
			sum+=a[i];
		}
		
		cout<<n*(n+1)/2-sum<<endl;
	}

	return 0;
}
