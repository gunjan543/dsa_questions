#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
		

	public:
	
	int ans(int arr[],int n)
	{
	    int dp[n+1];
	    for(int i=0;i<n;i++)
	    {
	        dp[i]=arr[i];
	    }
	    
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<i;j++){
	            if(arr[i]>arr[j])
	            dp[i]=max(dp[i],dp[j]+arr[i]);
	        }
	    }
	    int max1=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	     max1=max(max1,dp[i]);   
	    }
	    return max1;
	}
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	   return ans(arr,n);
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends