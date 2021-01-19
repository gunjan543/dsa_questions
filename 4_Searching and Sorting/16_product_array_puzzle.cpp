//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int>&, int );

// your code will be pasted here

int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        
        vec = productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}// } Driver Code Ends


//User function template for C++

// nums: given vector
// return the Product vector P that hold product except self at each index
vector<long long int> productExceptSelf(vector<long long int>& arr, int n) {
   
    vector<long long int>right(n+1);
     vector<long long int>left(n+1);
   vector<long long int>product(n+1);
    left[0]=1;
    right[n-1]=1;
    
    for(int i=1;i<n;i++)
    left[i]=arr[i-1]*left[i-1];
    
    for(int j=n-2;j>=0;j--)
    right[j]=arr[j+1]*right[j+1];
    
    for(int i=0;i<n;i++)
    product[i]=left[i]*right[i];
    
    return product;
}
