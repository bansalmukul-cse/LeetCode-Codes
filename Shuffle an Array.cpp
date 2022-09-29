class Solution {
public:
    vector<int> v,nums;
    Solution(vector<int>& vec) {
        v = vec;
        nums=vec;
    }
    
    vector<int> reset() {
        return nums;
    }
    
    vector<int> shuffle() {
        next_permutation(v.begin(),v.end());
        return v;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
