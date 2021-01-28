#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
    int ans(string s)
    {
        int n=s.length();
        int max_ans=0;
        int max_overall=0;
        
        for(int i=0;i<n;i++)
        {
             max_ans += (s[i] == '0' ? 1 : -1);
             if(max_ans<0)
             max_ans=0;
             
             max_overall=max(max_ans,max_overall);
        }
        if(max_overall==0)
        return -1;
        return max_overall;
    }
	int maxSubstring(string S)
	{
	    return ans(S);
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends