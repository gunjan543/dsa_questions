
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:
    int dp[1001][1001];
    
    int subsetSum(int arr[],int n,int sum){
        
        if(n==-1)
        {
           if(sum==0)
               return 1;
                  return 0;
        }     
        if(sum<0)
        return 0;
        if(sum==0)
        return 1;
        
        if(dp[n][sum]!=-1) return dp[n][sum];
        
        return dp[n][sum]=subsetSum(arr,n-1,sum-arr[n])||subsetSum(arr,n-1,sum);
        
    }
    
    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0;i<N;i++)
        sum+=arr[i];
        if(sum&1) return 0;
        sum=sum/2;
        
        dp[N][sum];
        memset(dp,-1,sizeof(dp));
        
        return subsetSum(arr,N-1,sum);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends