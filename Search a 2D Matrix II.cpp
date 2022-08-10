class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            int k = matrix[i].size();
           if(binary_search(matrix[i].begin(),matrix[i].end(),target))
               return true;
        }
        return false;
    }
};
