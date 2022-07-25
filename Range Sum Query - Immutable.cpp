class NumArray {
public:
   vector<int> memo = {0};
    NumArray(vector<int> &nums) {
        int summ = 0;
        for (int n : nums) {
            summ += n;
            memo.push_back(summ);
        }
    }

    int sumRange(int i, int j) {
        return memo[j+1] - memo[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
