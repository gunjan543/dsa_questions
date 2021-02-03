#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

class Solution{
		

	public:
	int dp[1001][1001];
	
	int func(int a[],int n,int w){
	    if(n==-1 and w==0)
	    {
	    return 0;
	    }
	    if(n==-1)
	    {
	    return 1e9;
	    }
	    if(w==0)
	    {
	    return 0;
	    }
	    if(dp[n][w]!=-1) {return dp[n][w];}
	    if((n+1) > w or a[n]==-1) return dp[n][w]=func(a,n-1,w);
	    int x=func(a,n-1,w);
	    int y=a[n]+func(a,n,w-(n+1));
	    
	    return dp[n][w]=min(x,y);
	}
	int minimumCost(int cost[], int N, int W) 
	{ 
        memset(dp,-1,sizeof(dp));
        int z=func(cost,N-1,W);
        if(z>=1e9) return -1;
        return z;
	} 
};


// { Driver Code Starts.
int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];
	    Solution ob;
	    cout << ob.minimumCost(a, n, w) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends