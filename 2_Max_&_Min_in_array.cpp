#include <iostream>
using namespace std;
int main() {
     int arr[] = {1,6,54,2,76,43,89};
     
    int n = sizeof(arr) / sizeof(arr[0]); 

    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"max = "<<max<<" "<<"min = "<<min;
    return 0;
}
