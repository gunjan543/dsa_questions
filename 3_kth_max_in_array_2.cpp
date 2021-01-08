#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
     int arr[] = {1,6,54,2,76,43,89};
     
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k=4;
    sort(arr,arr+n);
    cout<<arr[k-1];
    
    return 0;
}
