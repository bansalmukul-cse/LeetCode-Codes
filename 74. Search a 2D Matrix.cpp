class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        if(row==0) return false;
        int col= matrix[0].size();
        int row1 =0, row2 = row-1;
        while(row1<row2){
            int mid = row1 + (row2-row1)/2;
            if(matrix[mid][col-1]<target)
                row1 = mid+1;
            else if(matrix[mid][0]>target)
                row2 = mid-1;
            else{
                 row1 = mid;
                 break;
            }
               
        }
        int col1=0,col2= matrix[0].size()-1;
        while(col1<=col2){
            int mid = col1 +(col2-col1)/2;
            if(matrix[row1][mid]<target)
                col1 = mid+1;
            else if(matrix[row1][mid]>target)
                col2 = mid-1;
            else
                return true;
        }
        return false;
    }
};

