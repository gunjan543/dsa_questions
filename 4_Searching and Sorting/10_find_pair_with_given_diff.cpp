#include <bits/stdc++.h>
using namespace std;

int findPair(int arr[], int size, int n)  
{  
    // Initialize positions of two elements  
    int i = 0;  
    int j = 1;  
  
    // Search for a pair  
    while (i < size && j < size)  
    {  
        if (i != j && arr[j] - arr[i] == n)  
        {  
            return 1;  
        }  
        else if (arr[j]-arr[i] < n)  
            j++;  
        else
            i++;  
    }  
  
     
    return -1;  
} 
int main() {
	int t,l,n;
	cin>>t;
	while(t--)
	{
	    cin>>n>>l;
	   int  arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int ans=findPair(arr,n,l);
	    cout<<ans<<endl;
	    
}
return 0;	
}
