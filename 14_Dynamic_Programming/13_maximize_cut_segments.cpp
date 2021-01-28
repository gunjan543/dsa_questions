#include<bits/stdc++.h>
using namespace std;

int maximizeTheCuts(int n, int x, int y, int z);

int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        
        //calling function maximizeTheCuts()
        cout<<maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}// } Driver Code Ends


//Complete this function
 int dp[10005];
 int ans(int n,int x,int y,int z)
 {
     if(n==0)return 0;
     if(dp[n]!=-1)return dp[n];
     int op1=INT_MIN,op2=INT_MIN,op3=INT_MIN;
     
    if(n>=x) op1=ans(n-x,x,y,z);
    if(n>=y) op2=ans(n-y,x,y,z);
    if(n>=z) op3=ans(n-z,x,y,z);
    return dp[n]=1+max(op1,max(op2,op3));
 }
int maximizeTheCuts(int n, int x, int y, int z)
{
    memset(dp,-1,sizeof(dp));
    int a=0;
    a=ans(n,x,y,z);
    if(a<0)
    return 0;
    return a;
}