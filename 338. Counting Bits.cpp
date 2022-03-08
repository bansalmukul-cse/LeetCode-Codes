class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1,0);
       
        for(int i = 1; i < res.size();i++)
            res[i] = i%2 + res[i/2];

        return res;
    }
};
