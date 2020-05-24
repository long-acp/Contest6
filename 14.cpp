#include<bits/stdc++.h> 
using namespace std;

bool isPrime[1000005]; 
  
void setup() 
{ 
    isPrime[0] = isPrime[1] = false; 
    for (int i=2; i<=1000000; i++) 
        isPrime[i] = true; 
  
    for (int p=2; p*p<=1000000; p++) 
    {  
        if (isPrime[p] == true) 
        { 
            for (int i=p*p; i<=1000000; i += p) 
                isPrime[i] = false; 
        } 
    } 
}  
void findPrimePair(int n) 
{  
    for (int i=0; i<n; i++) 
    { 
        if (isPrime[i] && isPrime[n-i]) 
        { 
            cout << i << " " << (n-i)<<endl; 
            return; 
        } 
    } 
    cout<<-1<<endl;
} 

int main()
{
	setup();
	int t=1;
	cin>>t;
	int n,K;
	while(t--)
	{
		cin>>n;
		findPrimePair(n);
	}

	return 0;
}

