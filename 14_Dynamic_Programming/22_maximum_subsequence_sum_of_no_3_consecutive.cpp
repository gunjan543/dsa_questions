#include <iostream>
using namespace std;
int dp[10001];
int maxSumWO3Consec(int arr[],int n)
{
    if(n==0)return 0;
    if(n==1) return arr[0];
    if(n==2) return arr[0]+arr[1];

    if(dp[n]!=-1)return dp[n];
    int op1=maxSumWO3Consec(arr,n-1);
    int op2=arr[n]+maxSumWO3Consec(arr,n-1);
    int op3=arr[n]+arr[n-1]+maxSumWO3Consec(arr,n-3);

    dp[n]=max(op1,max(op2,op3));
    return dp[n];
}
int main() 
{ 
    int arr[] = {3000, 2000, 1000, 3, 10}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    dp[n+1];
    memset(dp,-1,sizeof(dp));
    cout << maxSumWO3Consec(arr, n-1); 
    return 0; 
}
