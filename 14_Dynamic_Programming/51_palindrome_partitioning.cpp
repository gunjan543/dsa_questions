// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends





// User function Template for C++

class Solution{
public:
    int palindromicPartition(string str)
    {
        // code here
        int n = str.length();
int dp[n];
bool pal[n][n];

for (int i = 0; i < n - 1; i++) {
pal[i][i] = true;
pal[i][i + 1] = (str[i] == str[i + 1]);
}

pal[n - 1][n - 1] = true;

for (int l = 3; l <= n; l++) {
for (int i = 0; i < n - l + 1; i++) {
int j = i + l - 1;

pal[i][j] = false;

if (str[i] == str[j])
pal[i][j] = pal[i + 1][j - 1];
}
}

for (int i = 0; i < n; i++) {
dp[i] = INT_MAX;

for (int j = i; j >= 0; j--)
if (pal[j][i])
dp[i] = min(dp[i], (j == 0)? 0 : dp[j - 1] + 1);
}

return dp[n - 1];
    }
};


// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends