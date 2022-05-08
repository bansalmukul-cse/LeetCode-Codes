class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>temp(m,vector<int>(n,0)); //make array and store new res in temp array
        
        for(int r=0;r<m;r++){
            for(int c=0;c<n;c++){
                int newval = ((r*n+c)+k) % (m*n);  //moving in 1 d array
                int newr = newval/n;  //calculate  row
                int newc = newval%n;   //calculate coloumn
                temp[newr][newc] = grid[r][c];
            }
        }
        return temp;
    }
};
