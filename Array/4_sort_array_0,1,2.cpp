#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]= {0,2,1,2,0,1};    
    //l=1,m=1,h=5  0,2,1,2,0,1
    //l=1,m=1,h=4  0,1,1,2,0,2
    //l=1,m=2,h=4  0,1,1,2,0,2
    //l=1,m=3,h=3  0,1,1,0,2,2
    int n = sizeof(arr) / sizeof(arr[0]); 
   int low= 0;
   int mid=0;
   int high= n-1;
    while(mid<=high){
     if(arr[mid]==0)
     {  swap(arr[low++],arr[mid++]);
     }
     else if(arr[mid]==1){
         mid++;
     }
     else if(arr[mid]==2)
     {
        swap(arr[high--],arr[mid]);
     }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  
    return 0;
}
