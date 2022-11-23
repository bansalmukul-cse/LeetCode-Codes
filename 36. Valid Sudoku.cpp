class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         vector<set<int>> row(9), col(9), block(9);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            
            if(board[i][j]!='.'){
                int no=board[i][j];
                if(row[i].count(no) || col[j].count(no) || block[(i/3)*3+j/3].count(no)){ //yaad rkhana padega bhai agar question krna h to bhai
                        return false;
                }
                row[i].insert(no);
                col[j].insert(no);
                block[(i/3)*3+(j/3)].insert(no);
            }
        }   
    }
    return true;
    }
};
