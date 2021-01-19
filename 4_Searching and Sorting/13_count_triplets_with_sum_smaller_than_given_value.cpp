#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    long long i,j,cnt=0;
	    sort(arr,arr+n);
	    
	    for(long long k=0;k<n;k++)
	    {
	        i=k+1;
	        j=n-1;
	        
	        while(i<j)
	        {
	            int s=arr[i]+arr[j]+arr[k];
	            
	            if(s<sum)
	            {
	                cnt+=(j-i);
	                i++;
	            }
	            else
	            j--;
	        }
	    }
	    return cnt;
	}
		 

};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends