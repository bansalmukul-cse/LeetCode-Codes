class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max1 = (nums[nums.size()-1]) - 1;
        int max2 = (nums[nums.size()-2]) - 1;
        int mul = max1*max2;
        return mul;
    }
    
};
