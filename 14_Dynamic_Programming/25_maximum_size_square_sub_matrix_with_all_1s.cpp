
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:
int printMaxSubSquare(vector<vector<int>>M,int R,int C)
{
    for(int i=1;i<R;i++)
    {
        for(int j=1;j<C;j++)
        {
            if(M[i][j]==1)
            M[i][j]=min(M[i-1][j-1],min(M[i-1][j],M[i][j-1]))+1;
            else
            M[i][j]=0;
        }
    }
   int max1=INT_MIN;
  for(int i=0;i<R;i++)
  {
      for(int j=0;j<C;j++)
      {
        max1=max(M[i][j],max1);
      }
  }
  return max1;
}
    int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        return printMaxSubSquare(mat,n,m);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n*m;i++)
            cin>>mat[i/m][i%m];
        
        Solution ob;
        cout<<ob.maxSquare(n, m, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends