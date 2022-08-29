class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> res;
        vector<int> u;
        res.push_back({1});
        for(int i = 1; i < numRows; i++) {
            u.push_back(1);
            for(int j  = 1; j < i; j++) {
                u.push_back(res[i-1][j]+res[i-1][j-1]);
            }
            u.push_back(1);
            res.push_back(u);
            u.clear();
        }
        return res;
    }
};
