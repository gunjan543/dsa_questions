#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


 
class Solution
{
public:
    #define mod 1000000007
  
    long long int ans(int n,long long int dp[])
    {
     if (dp[n] != -1) 
        return dp[n]; 
  
    if (n > 2) 
        return dp[n] =(ans(n - 1,dp)%mod + ((n - 1) * ans(n - 2,dp))%mod)%mod; 
    else
        return dp[n] = n; 
        
        
    }
    int countFriendsPairings(int n) 
    { 
        // code here
       long long int dp[n+1];
        memset(dp,-1,sizeof(dp));
        return ans(n,dp);
    }
};    
 

// { Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 
  // } Driver Code Ends