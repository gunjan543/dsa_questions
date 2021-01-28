#include <iostream>
using namespace std;
#define NUM_STATION 4
int dp[100][100];
int carAssembly(int a[][NUM_STATION],int t[][NUM_STATION],int e[],int x[]){
    dp[0][0]=a[0][0]+e[0];       //14 19 22 24 42
    dp[1][0]=a[1][0]+e[1];       //14 24 24 28 35
    int i=1,j=1;
    while(i<NUM_STATION && j<NUM_STATION)
    {
        dp[0][i]=min(dp[0][i-1]+a[0][i],dp[1][j-1]+t[1][j]+a[0][j]);
        
        dp[1][j]=min(dp[1][j-1]+a[1][j],dp[0][i-1]+t[0][i]+a[1][i]);
        //cout<<dp[0][i]<<" "<<dp[1][j]<<endl;
        i++;j++;
    }
    //cout<<dp[0][NUM_STATION-1]<<" "<<dp[1][NUM_STATION-1];
    return min(dp[0][NUM_STATION-1]+x[0],dp[1][NUM_STATION-1]+x[1]);

    
}
int main() 
{ 
    int a[][NUM_STATION] = {{4, 5, 3, 2}, 
                            {2, 10, 1, 4}}; 
    int t[][NUM_STATION] = {{0, 7, 4, 5}, 
                            {0, 9, 2, 8}}; 
    int e[] = {10, 12}, x[] = {18, 7}; 
 
    cout << carAssembly(a, t, e, x); 
 
    return 0; 
} 
