#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
int removals(int a[],int i,int j,int k)
{
  if(i>=j)
   return 0;
  else if(a[j]-a[i]<=k)
    return 0;
  else if(dp[i][j]!=-1)
   return dp[i][j];
   else if ((a[j] - a[i]) > k)
   dp[i][j]=1+max(removals(a,i+1,j,k),removals(a,i,j-1,k));  
   return dp[i][j];
}
int main()
{
    int a[] = { 1, 3, 4, 9, 10, 11, 12, 17, 20 };
    int n = sizeof(a) / sizeof(a[0]);
    int k = 4;
    sort(a,a+n);
    memset(dp,-1,sizeof(dp)); 
    if(n==1) 
    cout<<0;
    else
    cout << removals(a, 0,n-1, k);
    return 0;
}
