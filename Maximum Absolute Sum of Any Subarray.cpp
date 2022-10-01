class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n= nums.size();
        int curr_sum =0,max_sum =0, min_sum =0;
        //run kadane's algo for +ve max sum 
        for(int i=0;i<n;i++){
            curr_sum += nums[i];
            max_sum = max(max_sum,curr_sum);
            if(curr_sum<0){
                curr_sum =0;
            }
        }
         //run kadanes algo for min sum
        curr_sum =0;
        for(int i=0;i<n;i++){
            curr_sum += nums[i];
            min_sum = min(min_sum,curr_sum);
            if(curr_sum>0){
                curr_sum =0;
            }
        }
        
        return max(max_sum, abs(min_sum));
    }
};
