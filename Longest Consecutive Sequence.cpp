class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        sort(nums.begin(),nums.end());
        int longest = INT_MIN, curr_longest =1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;
            else if(nums[i] == nums[i-1]+1){  // consecutive element - update current streak length
                curr_longest++;
            }
            else{
                longest = max(longest,curr_longest);
                curr_longest=1; // reset current streak length
            }
            
            
            
        }
        return max(longest,curr_longest);
          
    }
};
