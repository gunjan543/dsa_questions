#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 // } Driver Code Ends


#define mod 1000000007;

class Solution{
    public:
    long long countWays(int n, int k){
        
        long long int diff=k*(k-1);
        long long int same=k;
        long long int total=same+diff;
        if(n==1)return k;
        for(int i=3;i<=n;i++)
        {   
            
            same=diff%mod;
            diff=(total*(k-1))%mod;
            total=(same+diff)%mod;
            
        }
        return total;
    }
};

// { Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends