#include<bits/stdc++.h>

using namespace std;

int Union[200005],Intersection[100005];

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

void arrange(int a[],int b[],int n,int m) 
{ 
	int x=0,y=0; 
	
    for (int i=0; i<n; i++) 
    	Union[x++] = a[i];
    	
    for (int i=0; i<m; i++) 
        if (binarySearch(a, 0, n-1, b[i])==-1) 
            Union[x++] = b[i];
    	else Intersection[y++] = b[i];
            
    sort(Union,Union+x);
    sort(Intersection,Intersection+y);
    
    for (int i=0; i<x; i++) cout<<Union[i]<<" ";
    cout<<endl;
    for (int i=0; i<y; i++) cout<<Intersection[i]<<" ";
    cout<<endl;
    
} 



int main()
{
	int t=1;
	cin>>t;
	int n,m;
	while(t--)
	{
		cin>>n>>m;
		int a[n+1],b[m+1];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		if (n > m) arrange(b,a,m,n);
		else arrange(a,b,n,m);
	}

	return 0;
}

