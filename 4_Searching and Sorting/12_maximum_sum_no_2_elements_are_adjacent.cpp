#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


 // } Driver Code Ends


// Function to return maximum of sum without adjacent elements
 ll dp[10001];
ll ans (ll arr[],ll n)
{
    if(n<=-1)
    return 0;
    
    if(dp[n]!=-1)
    return dp[n];
    
    int op1=ans(arr,n-1);
    int op2=arr[n]+ans(arr,n-2);
    return dp[n]=max(op1,op2);
}
ll FindMaxSum(ll arr[], ll n)
{
    // Your code here
    dp[n+1];
     memset(dp,-1,sizeof(dp));
    return ans(arr,n-1);
}


// { Driver Code Starts.

int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		ll n;
		cin>>n;
		ll a[n];
		
		//inserting money of each house in the array
		for(ll i=0;i<n;++i)
			cin>>a[i];
			
		//calling function FindMaxSum()
		cout<<FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends