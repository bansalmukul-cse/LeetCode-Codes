class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        
        int res =0, n = nums.size();
        sort(nums.begin(),nums.end());
        
       
        for(int i=n-1;i>=0;i--){
            
            int low = 0,high = i-1;
            while(low<high){
                if(nums[low]+nums[high]>nums[i]){
                    res += high -low;
                    high--;
                }
                else
                    low++;
            }
        }
        return res;
        
        
    }
};

