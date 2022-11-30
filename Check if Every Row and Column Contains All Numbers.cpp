class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        //set<int>s;
        for(int i=0;i<row;i++){
            set<int>s;
            for(int j=0;j<col;j++){
                s.insert(matrix[i][j]);
            }
            if(s.size()!=row){
                return false;
            }
        }
        for(int i=0;i<col;i++){
				set<int>temp;
				for(int j=0;j<row;j++){
					temp.insert(matrix[j][i]);
				}
				if(temp.size()!=row)
					return false;
			}
        return true;
    }
};
