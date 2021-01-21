#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

int lcs(int, int, string, string);

int main()
{
    int t,n,k,x,y;
    
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        
        cout << lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
// } Driver Code Ends


// function to find longest common subsequence

int lcs(int x, int y, string s1, string s2){
    
    // your code here
    int m=s1.length();
    int n=s2.length();
    
    int l[m+1][n+1];
    int i,j;
    
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 ||j==0)
            l[i][j]=0;
            else if(s1[i-1] == s2[j-1])
            l[i][j]=l[i-1][j-1]+1;
            else
            l[i][j]=max(l[i-1][j],l[i][j-1]);
        }
    }
    return l[m][n];
    
}
