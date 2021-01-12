#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	   vector<int>neg,pos;
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]>=0)
	       pos.push_back(arr[i]);
	       else
	       neg.push_back(arr[i]);
	   }
	   int a=0,b=0,c=0;
	   while(a < pos.size() && b < neg.size())
	   {
	       arr[c++]=pos[a++];
	       arr[c++]=neg[b++];
	   }
	   while(a<pos.size()){
	       arr[c++]=pos[a++];
	   }
	   while(b<neg.size()){
	       arr[c++]=neg[b++];
	   }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends