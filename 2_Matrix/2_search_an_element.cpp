class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
    int rows =  matrix.size();
    int cols = matrix[0].size();
    int row_ans=INT_MAX;    
    
    for(int i=0;i<rows;i++)
    {
        if(matrix[i][0]<=target && matrix[i][cols-1]>=target)
        { row_ans=i;
          break;
        }
              
    }
    if(row_ans==INT_MAX)
    return false;
    for(int i=0;i<cols;i++)
    {
        if(matrix[row_ans][i]==target)
            return true;
    }
        return false;
    }
};