class Solution {
public:
    int minPairSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int maxsum =0;
        int i =0;
        int j = nums.size()-1;
        while(i<j){
            int sum = nums[i]+nums[j];
            maxsum = max(sum,maxsum);
            i++;
            j--;
        }
        return maxsum;
        
        
    }
};
