#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long min_e=arr[0];
	    long long max_e=arr[0];
	    long long product=arr[0];
	    
	    for(long long i=1;i<n;i++)
	    {
	        if(arr[i]<0)
	        {swap(min_e,max_e);}
	        long long a=arr[i];
	        max_e=max(arr[i]*max_e,a);
	        min_e=min(arr[i]*min_e,a);
	        
	        if(max_e>product)
	        product=max_e;
	    }
	    return product;
	    
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
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends