
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{//9 0 7 6 5 4
		    sort(v.begin(),v.end());
		    int n=v.size();
		    
		    if(n%2==0)
		    {
		        int b = n/2;
		        int c=v[b]+v[b-1];
		     
		        int ans = c/2;
		        return ans;
		    }
		   else
		   return v[n/2];
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends