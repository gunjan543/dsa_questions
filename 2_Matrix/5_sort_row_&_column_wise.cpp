
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int>res;
          vector<vector<int>>sorted;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                res.push_back(Mat[i][j]);
            }
        }
        sort(res.begin(),res.end());
        int cnt=0;
        for (int i = 0; i < N; i++) { 
        vector<int> v1; 
        for (int j = 0; j < N; j++) { 
            int num=res[cnt];
             v1.push_back(num); 
            cnt++; 
            
        }
           sorted.push_back(v1);
            
        } 
  
        return sorted;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}  // } Driver Code Ends