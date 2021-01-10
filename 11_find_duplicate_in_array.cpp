#include <iostream>
using namespace std;
int main() {
   int nums[] = {3,1,3,4,2,5};
   int ans=3;
   for(int i=1;i<6;i++){
       ans=ans^nums[i];
   } 
   
   for(int i=1;i<6;i++){
       ans=ans^i;
   }
   cout<<ans;
}
