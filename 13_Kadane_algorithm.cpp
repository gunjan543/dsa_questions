#include <iostream>
using namespace std;
int main() {
    //algorithm
    //1)initialize 2 variables - max_so_far: global max value and max_ending_here: sum of array elements till i
    //2)loop through all elements: max_ending_here=max_ending_here+a[i]... if(max_ending_here>max_so_far){max_so_far=max_ending_here}...if(max_ending_here < 0) max_ending_here = 0
    //3)return max_so_far
    int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max_ending_here=0;
    int max_so_far=0;
    for(int i=0;i<n;i++){
     max_ending_here=max_ending_here+arr[i];
     if(max_ending_here > max_so_far)
     max_so_far=max_ending_here;
     if(max_ending_here<0)
     max_ending_here=0;
    }
    cout<<max_so_far;
}
