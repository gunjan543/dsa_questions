#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
   int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6} ;
    int n1 = sizeof(arr1) / sizeof(arr1[0]); 
    int n2 = sizeof(arr2) / sizeof(arr2[0]); 

    //union
    set<int> s1;
    for(int i=0;i<n1;i++)
    { 
        s1.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        s1.insert(arr2[i]);
    }
    cout<<"Union is - ";
   for (auto itr = s1.begin(); 
         itr != s1.end(); ++itr)
    {
        cout << *itr << ",";
    }

    cout<<endl;

    //intersection
    int i=0,j=0;
    while(i<=n1 && j<=n2){
        if(arr1[i]>arr2[j])
          j++;
        else if(arr1[i]<arr2[j])
          i++;
         else{
             cout<<arr1[i]<<" ";
             i++;
             j++;
         }   
    }
    return 0;
}
