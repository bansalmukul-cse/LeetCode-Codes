class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty())
            return 0;
        int row  = grid.size();
        int column =grid[0].size();
        int numberofislands = 0;
        bool  visited[row][column];
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                visited[i][j]=false;
            }
        }
        int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};;
        queue<pair<int,int>> q;
        
        for(int i =0;i<row;i++){
            for(int j =0;j<column;j++){
                if(grid[i][j]=='1' && visited[i][j]==false){
                    q.push(make_pair(i,j));
                    visited[i][j]=true;
                    numberofislands++;
                    while(!q.empty()){
                        for(int i=0;i<4;i++){
                            int a = q.front().first + directions[i][0];
                            int b = q.front().second + directions[i][1];
                            if (a>=0 && a < row && 0 <= b && b < column && grid[a][b] == '1' && visited[a][b] == false) {
                                q.push(make_pair(a, b));
                                visited[a][b] = true;
                            }
                        }
                        q.pop();
                    }
                }
            }
        }
        return numberofislands;
    }
};
