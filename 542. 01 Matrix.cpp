class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        // by using BFS
        int n = mat.size();
        int m = mat[0].size();
        queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0)
                   q.push({i,j}); 
            }
        }
        vector<vector<int>> res(n,vector<int>(m,INT_MAX));
        
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    res[i][j] = 0 ;// make all zeros distance zero as they themselves are 0
                }
            }
        }
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            
            int x = it.first;
            int y = it.second;
            
            for(int i=0;i<4;i++){
                int newx = x+dx[i];
                int  newy = y+dy[i];
            
            
            if(newx>=0 and newy>=0 and newx<n and newy<m and mat[newx][newy]==1){
                if(res[newx][newy]>res[x][y]+1){
                    res[newx][newy]=res[x][y]+1;
                    q.push({newx,newy});
                }
            }
        }
        }
        return res;
        
        
    }
};
