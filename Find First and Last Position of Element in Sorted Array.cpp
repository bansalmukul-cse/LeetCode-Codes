class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0, high = nums.size();
        int left = -1,right = -1;
        while(low<high){
            int mid  = low +(high-low)/2;
            if(nums[mid]>=target)
                high = mid;
            else 
                low = mid+1;  
        }
        left = low;
        
        low =0;
        high = nums.size();
        while(low<high){
            int mid = low + (high-low)/2;
            if(nums[mid]>target)
                high = mid;
            else
                low= mid+1;
        }
        right = low;
        return left == right?vector<int> {-1,-1} : vector<int> {left,right-1};
        
        
        
        
    }
};
