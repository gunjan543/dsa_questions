#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
   int arr[]={ 4, 5, 6, 7, 8, 4, 4, 5, 6, 6 };
   int k=5;
   int n=10;
   int sol=n/k;
   set<int>s2;
   map<int,int>freq;
   
   for(int i=0;i<n;i++)
   {
       freq[arr[i]]++;
       if(freq[arr[i]]>sol)
       {s2.insert(arr[i]);}
   }
    for (auto itr = s2.begin(); 
         itr != s2.end(); ++itr) {
        cout <<*itr<<" ";
    }
    return 0;
}
