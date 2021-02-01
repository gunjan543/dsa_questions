#include <bits/stdc++.h>
using namespace std;
int smallestSumSubarr(int arr[],int n)
{
    int min_ending_here=INT_MAX;
    int min_ending=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(min_ending_here>0)
        min_ending_here=arr[i];
        else
        min_ending_here+=arr[i];
        min_ending=min(min_ending,min_ending_here);
    }
    return min_ending;
}
int main() 
{ 
    int arr[] = {3, -4, 2, -3, -1, 7, -5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Smallest sum: "
         << smallestSumSubarr(arr, n); 
    return 0;      
}  
