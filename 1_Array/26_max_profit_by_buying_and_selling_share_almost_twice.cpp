#include <iostream>
using namespace std;
int maxProfit(int a[],int n)
{
  int dp[n];
  memset(dp,0,sizeof(dp));
  int m1=a[n-1];
  int m2=a[0];
  for(int i=n-2;i>=0;i--)
  {
      if(a[i]>m1) m1=a[i];
      dp[i]=max(dp[i+1],m1-a[i]);
  }
  for(int i=1;i<n;i++)
  {
      if(a[i]<m2) m2=a[i];
      dp[i]=max(dp[i-1],dp[i]+(a[i]-m2));
  }
  return dp[n-1];
}

int main()
{
    int price[] = { 2, 30, 15, 10, 8, 25, 80 };
    int n = sizeof(price) / sizeof(price[0]);
    cout << "Maximum Profit = " << maxProfit(price, n);
    return 0;
}
