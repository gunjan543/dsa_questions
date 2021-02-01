// Initial template for C++


#include<bits/stdc++.h>
using namespace std;


int findPages(int arr[], int n, int m);

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        cout << findPages(A, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//User function template in C++
bool isValid(int books[],int n,int m,int ans){
    int students=1;
    int allocated_pages=0;
    
    for(int i=0;i<n;i++)
    {
           if(books[i]>ans){
          return false;
           }
        if(allocated_pages+books[i]>ans)
        {
            students++;
            allocated_pages=books[i];
            if(students>m)
            {return false;}
        }
        else{
            allocated_pages+=books[i];
        }
    }
    return true;
}

int findPages(int *arr, int n, int m) {
    //code here
    int s=arr[n-1];
    int e=0;
    int total_pages=0;
    for(int i=0;i<n;i++)
    {
        total_pages += arr[i];
    }
    e=total_pages;
    int final_ans=s;
    while(s<=e)
    {   int mid=(s+e)/2;
        if(isValid(arr,n,m,mid))
        {
             final_ans=mid;
             e=mid-1;
        }
        else
        {
        s=mid+1;
        }
    }
    return final_ans;
    }
    


