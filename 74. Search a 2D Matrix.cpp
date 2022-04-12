//According to Wikipedia's article: "The Game of Life, also known simply as Life, is a cellular automaton devised by the British mathematician John Horton Conway in 1970."

//The board is made up of an m x n grid of cells, where each cell has an initial state: live (represented by a 1) or dead (represented by a 0). 
//Each cell interacts with its eight neighbors (horizontal, vertical, diagonal) using the following four rules (taken from the above Wikipedia article):

//Any live cell with fewer than two live neighbors dies as if caused by under-population.
//Any live cell with two or three live neighbors lives on to the next generation.
//Any live cell with more than three live neighbors dies, as if by over-population.
//Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.
//The next state is created by applying the above rules simultaneously to every cell in the current state, where births and deaths occur simultaneously.
//Given the current state of the m x n grid board, return the next state.

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

