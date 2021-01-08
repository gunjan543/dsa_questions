#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
     int arr[] = {1,6,54,2,76,43,89};
     
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k=4;
    priority_queue<int> p;
    for(int i=0;i<n;i++){
        p.push(arr[i]);
    }
    for(int i=0;i<n-k;i++){
        p.pop();
    }
    cout<<p.top();

    return 0;
}
