// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:

    int ans(int n,int arr[])
    {
        int dp[n+1];
        
        for(int i=0;i<n;i++)
        {
            dp[i]=1;
        }
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(abs(arr[i]-arr[j])==1)
                dp[i] = max(dp[i],1 +dp[j]);
                
                
            }
        }
        int max1=INT_MIN;
        for(int i=0;i<n;i++)
        {
            max1=max(dp[i],max1);
        }
        return max1;
    }
    int longestSubsequence(int N, int A[])
    {
        // code here
        return ans(N,A);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.longestSubsequence(N, A)<<endl;
    }
    return 0;
}  // } Driver Code Ends