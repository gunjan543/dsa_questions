
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	    int dp[1001][1001];
	    int helper(string s,string t,int n,int m)
	    {
	        if(m==-1)return n+1;
	        if(n==-1) return m+1;
	        if(dp[n][m]!=-1) return dp[n][m];
	        if(s[n]==t[m]) return dp[n][m]=helper(s,t,n-1,m-1);
	        
	        int a=helper(s,t,n-1,m-1);
	        int b=helper(s,t,n,m-1);
	        int c=helper(s,t,n-1,m);
	        
	        return dp[n][m]=1+min(a,min(b,c));
	    }
		int editDistance(string s, string t)
		{
		    // Code here
		    int n=s.length();
		    int m=t.length();
		     memset(dp,-1,sizeof(dp));
		    return helper(s,t,n-1,m-1);
		 
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string s, t;
    	cin >> s >> t;
    	Solution ob;
    	int ans = ob.editDistance(s, t);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends