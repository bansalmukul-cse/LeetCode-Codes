class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int res=0;
        for(int i=0;i<n;i++){
            int sum =0;
            int m = accounts[i].size();
            for(int j =0; j<m;j++){
                sum += accounts[i][j];
            }
            res= max(sum,res);
        }
        return res;
    }
};
