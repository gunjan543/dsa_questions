//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
        int x = A-B; //positive if a>b
        int y = B-C; //positive if b>c
        int z = A-C; //positive if a>c
        
        if(x*y > 0)
        return B;
        else if(x*z >0)
        return C;
        else
        return A;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  // } Driver Code Ends