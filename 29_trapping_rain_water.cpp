#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){

int left[n],right[n];
int max_till_now=-1;
int max_2=-1;
int ans=0;
    // Your code here
for(int i=0;i<n;i++)
{
    left[i]=max(arr[i],max_till_now);
    max_till_now=left[i];
}

for(int i=n-1;i>=0;i--)
{
    right[i]=max(arr[i],max_2);
    max_2=right[i];
}
for(int i=0;i<n;i++)
{
    ans+=min(left[i],right[i])-arr[i];
    
}
return ans;
}

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        //calling trappingWater() function
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends