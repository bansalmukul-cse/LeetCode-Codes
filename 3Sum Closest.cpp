class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum =0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mn = INT_MAX,res =0;;
        for(int i=0;i<n;i++){
            for(int j= i+1,k= n-1;j<k;){
                sum = nums[i]+nums[j]+nums[k];
                if(sum>target){
                    k--;
                }
                else if(sum<target){
                    j++;
                }
                else{
                    return sum;
                }
                if(abs(sum-target)<mn){
                    res = sum;
                    mn=abs(sum-target);
                }
            }
        }
        return res;
    }
};
