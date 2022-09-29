class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        if(m * n != r * c) {
            return mat;
        }
        
        vector<vector<int>> res(r, vector<int>(c));
        int row = 0, col = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                res[row][col] = mat[i][j];
                col += 1;
                if(col == c) {
                    row += 1;
                    col = 0;
                }
            }
        }
        return res;
    }
};
