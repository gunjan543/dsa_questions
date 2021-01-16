#include <iostream>
using namespace std;
int nextGap(int gap){
    if(gap<=1)
    return 0;
    return (gap/2)+(gap%2);
}
int main() {
    int arr1[]={1,23,45,54,98};
    int arr2[]={3,8,34,54,100};
    int n1=5,n2=5;
    int gap=n1+n2; 
    int i,j;
    for(gap=nextGap(gap);gap>0;gap=nextGap(gap))
    {
        //checking in 1st array
        for(i=0;i+gap<n1;i++)
        {
            if(arr1[i]>arr1[i+gap])
            swap(arr1[i],arr1[i+gap]);
        }
       //checking in 1st and 2nd array
       for(j=gap>n1?gap-n1:0;i<n1 && j<n2;i++,j++)
       {
           if(arr1[i]>arr2[j])
           swap(arr1[i],arr2[j]);
       }
       //2nd array
       if(j<n2)
       {
           for(j=0;j+gap<n2;j++)
           {
           if(arr2[j]>arr2[j+gap])
           swap(arr2[j],arr2[j+gap]);
           }
       }

    }
    for(int p=0;p<n1;p++)
    cout<<arr1[p]<<" ";
    cout<<endl;
    for(int k=0;k<n2;k++)
    cout<<arr2[k]<<" ";
    return 0;
}
