#include <iostream>
using namespace std;
int main() {
//Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
//Output: [[1,6],[8,10],[15,18]]
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>sol;
        sort(intervals.begin(),intervals.end()); 
        int i=0;
        while(i<intervals.size()){
            
            int s=intervals[i][0];
            int e=intervals[i][1];

            vector<int>temp(2);
            temp[0]=s;
            temp[1]=e;
            if(i+1 == intervals.size()){
                sol.push_back(temp);
                return sol;
            }
            int s2=intervals[i+1][0];
            int e2=intervals[i+1][1];
            bool f=false;
            int a,b;
            if(s2<=e)
            {
                 a=min(s,s2);
                 b=max(e,e2);
                 f=true;
            }
            if(f)
            {
                temp[0]=a;
                temp[1]=b;
                intervals[i+1]=temp;
            }
            else
            {
                sol.push_back(temp);
            }
            i++;
            
        }
        return intervals;
    }
};
}
