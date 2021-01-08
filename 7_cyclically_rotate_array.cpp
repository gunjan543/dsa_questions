#include <iostream>
using namespace std;
int main() {
    int arr[]={9,8,7,6,4,2,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
     int x = arr[n - 1], i; 

    for (i = n - 1; i > 0; i--) 
    arr[i] = arr[i - 1];  
    arr[0] = x; 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
