class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(),nums.end());
        int count =0;
        int left=0, right = nums.size()-1;
        
        while(left<=right){
            if(nums[left]+nums[right]<=limit){
                left++;
                right--;
                count++;
            }
            else{
                right--;
                count++;
            }
            
        }
        return count;
    }
};
