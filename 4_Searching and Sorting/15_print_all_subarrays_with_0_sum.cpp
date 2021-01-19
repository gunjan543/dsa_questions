//Initial function template for C++

#include<bits/stdc++.h>

using namespace std;

#define ll long long 
ll findSubarray(vector<ll> , int );

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        
        cout << findSubarray(arr,n) << "\n";
    }
	return 0;
}
// arr : given array 
// n : size of the given array
ll findSubarray(vector<ll> arr, int n ) {
    //code here
    unordered_map<int,int>freq;
    int cnt=0,s=0;
    for(int i=0;i<n;i++)
    {
        s += arr[i];
        if(freq[s])
        {cnt+=freq[s];}
        if(s==0)
        {cnt++;}
        freq[s]++;
        
    }
    return cnt;
}

