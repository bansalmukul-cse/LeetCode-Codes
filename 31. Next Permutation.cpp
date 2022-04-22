class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakpoint = -1;
         // find a breakpoint:
        for(int i = nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                breakpoint = i-1;
                break;
            }
        }
        // if no  breakpoint
        if(breakpoint <0){
            reverse(nums.begin(),nums.end());
            return ;
        }
        
        // if found a breakpoint
        for(int i = nums.size() - 1; i >= 0; i--){
            if(nums[i]>nums[breakpoint]){
                swap(nums[breakpoint],nums[i]);
                sort(nums.begin()+breakpoint+1,nums.end());
                break;
            }
        }
        
    }
};
