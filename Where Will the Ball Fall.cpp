class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
         int n=grid.size();
        int m=grid[0].size();
        vector<int> result(m);
        
        for(int i=0;i<m;i++){
            int curr=i;
            int next=-1;
            
            for(int j=0;j<n;j++){
                next=curr+grid[j][curr];
                
                if(next<0 || next>=m || grid[j][curr]!=grid[j][next]){
                    curr=-1;
                    break;
                }
                curr=next;
            }
            result[i]=curr;
        }
        return result;
    }
};
