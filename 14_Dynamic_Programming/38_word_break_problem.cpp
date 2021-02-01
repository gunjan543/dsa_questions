//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int wordBreak(string A, vector<string> &B);

// User code will be pasted here

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        cout<<wordBreak(line, dict)<<"\n";
    }
}
// } Driver Code Ends


//User function template for C++

// A : given string to search
// B : vector of available strings
int ans(string a,vector<string> b)
{
    unordered_map<string,int>dp;
    int n=a.length();
    
    if(n==0)
    return 1;
    if(dp[a]!=0)return dp[a];
    
    for(int i=1;i<=a.length();i++)
    {
      int flag=0;    
      string ss = a.substr(0,i);
      for(int j=0;j<b.size();j++)
      {
          if(ss.compare(b[j]) == 0)
          {
              flag=1;
              break;
          }
      }
      if(flag==1 && ans(a.substr(i,n-i),b)){return dp[a]=1;}
        
    }
    return dp[a]=0;
}

int wordBreak(string A, vector<string> &B) {
    
    return ans(A,B);
}