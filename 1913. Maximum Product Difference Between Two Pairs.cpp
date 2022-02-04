class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max = (nums[nums.size()-1] * nums[nums.size()-2]);
        int min = nums[0]*nums[1];
        int diff = max - min;
        return diff;
    }
};
