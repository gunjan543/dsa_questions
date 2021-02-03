// Counts Palindromic Subsequence in a given String
#include<iostream>
#include<cstring>
using namespace std;
 
// Function return the total palindromic subsequence
int countPS(string str);
 
// Driver program
int main()
{
   int t;
	cin>>t;
   while(t--)
	{
	string str;
cin>>str;
cout<<countPS(str)<<endl;
} 
}// } Driver Code Ends


/*You are required to complete below method */
int dp[1001][1001];

int ans(string s,int i,int j)
{
    
    if(i>j)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    if(s[i]==s[j])
    return dp[i][j]=ans(s,i+1,j)+ans(s,i,j-1)+1;
    else
    return dp[i][j]=ans(s,i+1,j)+ans(s,i,j-1)-ans(s,i+1,j-1);
}
int countPS(string str)
{
   //Your code here
   int n=str.length();
   dp[n+1][n+1];
   memset(dp,-1,sizeof dp);
   return ans(str,0,n-1);
}
 