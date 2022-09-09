class Solution {
public:
   
         int maxResult(vector<int>& nums, int k) {
        vector<int>dp(nums.size(),INT_MIN);
        dp[0] = nums[0];
        priority_queue<pair<int,int>>pq;
        pq.push({dp[0],0});
        for(int i=1; i<nums.size(); i++){
            while(pq.size() && i-pq.top().second >k){
                pq.pop();
            }
            auto top = pq.top();
            dp[i] = max(dp[i], nums[i] + dp[top.second]);
            pq.push({dp[i],i});
        }
        return dp[nums.size()-1];
    }
    
};
