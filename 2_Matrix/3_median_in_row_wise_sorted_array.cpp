//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here        
        int max=INT_MIN;
        int min=INT_MAX;
        
        for(int i=0;i<r;i++)
        {
            if(matrix[i][0]<min)
            min=matrix[i][0];
            
            if(matrix[i][c-1]>max)
            max=matrix[i][c-1];
        }
        
        int desired=(r*c+1)/2;
        
        while(max>min)
        {
            int mid=min+(max-min)/2;
            int place=0;
            for(int i=0;i<r;i++)
            place += upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
            
            if(place<desired)
            min=mid+1;
            else
            max=mid;
        }
        return min;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends