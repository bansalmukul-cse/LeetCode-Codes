class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int totalsum =0;
        int currsum =0;
        vector<int> ans;
        for(auto i : nums){
            totalsum += i;
        }
        sort(nums.begin(),nums.end());
        for(int i = nums.size()-1;i>=0;i--){
            currsum += nums[i];
            totalsum -= nums[i];
            ans.push_back(nums[i]);
            if(currsum>totalsum)
                break;
        }
        return ans;
        
    }
};
