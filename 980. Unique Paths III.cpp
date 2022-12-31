class Solution {
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        if(!grid.size() || !grid[0].size()) return 0;
        int m=grid.size(); int n=grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n));
        int res=0;
        int sx,sy,tx, ty;
        int todo=0;
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]>=0) todo++;
                if(grid[i][j]==1) {sx=i; sy=j;}
                else if(grid[i][j]==2) {tx=i; ty=j;}
            }
        dfs(grid, visited, sx, sy, tx , ty, res, todo);
        return res;
    }
    
private:
    void dfs(vector<vector<int>>& grid,  vector<vector<bool>> &visited, int sx, int sy, int tx, int ty, int &res, int todo){
        if(sx<0 || sx>=grid.size()|| sy<0 || sy>=grid[0].size() ||visited[sx][sy] || grid[sx][sy]<0) return;
        todo--;
        visited[sx][sy]=true;
        if(sx==tx && sy==ty && !todo) res++;
        for(auto dir:dirs){
            dfs(grid, visited, dir.first+sx, dir.second+sy, tx, ty, res, todo);
        }
        visited[sx][sy]=false;
    }
    
    vector<pair<int,int>> dirs={{-1, 0}, {0,1}, {0, -1}, {1,0}};
};
