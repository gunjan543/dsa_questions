#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    sort(arr,arr+n);
	    //1 3 4 7 9 9 12 56
	    int min_diff=1000000000;
	    for(int i=0;i<n-k+1;i++)
	    {
	        if(arr[i+k-1]-arr[i]<min_diff)
	         min_diff=arr[i+k-1]-arr[i];
	    }
	    
	    cout<<min_diff<<endl;
	}
	return 0;
}