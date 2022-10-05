class Solution {
public:
    void convert(vector<vector<char>>& board){
         int n = board.size();
        int m =board[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='B'){
                    board[i][j]='O';
                }
                else if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
    }
    
    
    bool isValid(vector<vector<char>>& board,int i , int j, int n, int m){
        if(i>=0 && i<n && j>=0 && j<m && board[i][j] == 'O'){
            return true;
        }
        return false;
    }
    
    void dfs(vector<vector<char>>& board,int i ,int j, int n ,int m){
        board[i][j]='B';
        
        if(isValid(board,i+1,j,n,m))
            dfs(board,i+1,j,n,m);
        if(isValid(board,i-1,j,n,m))
            dfs(board,i-1,j,n,m);
        if(isValid(board,i,j+1,n,m))
            dfs(board,i,j+1,n,m);
        if(isValid(board,i,j-1,n,m))
            dfs(board,i,j-1,n,m);
        
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        //vector<bool>visited(n,false);
        
        //handling all boundary conditions
        for(int i=0;i<n;i++){
            // left -> top bottom
            int j=0;
            if(board[i][j]=='O'){
                dfs(board,i,j,n,m);
            }
            
           // right -> top bootm 
             j = m-1;
            if(board[i][j]=='O'){
                dfs(board,i,j,n,m);
            }
        }
        
        for(int j=0;j<m;j++){
            int i=0;
            // top -> left right
            if(board[i][j]=='O'){
                dfs(board,i,j,n,m);
            }
            // bottom -> left right
             i = n-1;
            if(board[i][j]=='O'){
                dfs(board,i,j,n,m);
            }
        }
        convert(board);
    }
};
