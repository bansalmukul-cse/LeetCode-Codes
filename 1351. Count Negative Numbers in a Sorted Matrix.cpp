class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            int k = grid[i].size();
            for(int j=0;j<k;j++){
                if(grid[i][j]<0)
                    count++;
            }
        }
        return count;
    }
};
