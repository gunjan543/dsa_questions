#include<bits/stdc++.h>
using namespace std;

int ans(int arr[],int n,int k)
{sort(arr, arr+n); 
    int dp[n+1];
    dp[0]=0;
    
    for(int i=1;i<n;i++)
    {
        dp[i] = dp[i-1];
        
        if(arr[i]-arr[i-1]<k)
        
       { 
        if(i>=2)
        dp[i]=max(dp[i],dp[i-2]+arr[i]+arr[i-1]);
        else
        dp[i]=max(dp[i],arr[i]+arr[i-1]);
       }
    }
    return dp[n-1];
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cin>>k;
	    cout<<ans(a,n,k)<<endl;
	}
	return 0;
}