#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2;  
        if (arr[mid] == x) 
            return mid+1;  
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
		cin>>n>>k;
		int a[n+1];
		
		int temp=-1; 
		
		for(int i=0;i<n;i++) 
		{
			cin>>a[i];
			if(a[i-1]>a[i]) temp=i;
		}
		if(temp==-1) cout<<binarySearch(a,0,n-1,k);
		else
		{
			if(k>=a[0]) cout<<binarySearch(a,0,temp-1,k);
			else  cout<<binarySearch(a,temp,n-1,k);
		}
		cout<<endl;
	}

	return 0;
}
