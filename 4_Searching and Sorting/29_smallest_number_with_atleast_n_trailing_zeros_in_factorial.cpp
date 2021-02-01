#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




class Solution
{
    public:
bool value(int p, int n) 
{ 
    int temp = p, count = 0, f = 5; 
    while (f <= temp) 
    { 
        count += temp/f; 
        f = f*5; 
    } 
    return (count >= n); 
} 
        int findNum(int n)
        {
           int low=0,high=n*5;
           while(low<high)
           {
               int mid=(low+high)/2;
               
               if(value(mid,n))
               high=mid;
               else
               low=mid+1;
           }
           return low;
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends