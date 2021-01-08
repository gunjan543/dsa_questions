#include <iostream>
using namespace std;
int main() {
     int arr[] = {1, 2, 3, 4, 5, 6};
     
    int n = sizeof(arr) / sizeof(arr[0]); 

    for(int i=n;i>n/2;i--){
        int temp=arr[i-1];
        arr[i-1]=arr[n-i];
        arr[n-i]=temp;
        
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
