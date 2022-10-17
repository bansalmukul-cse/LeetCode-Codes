class Solution {
public:
    int solve(int i,int j,vector<int>& nums,vector<vector<int>>&dp){
        if(i>j) return 0;
        int maxi = INT_MIN;
        if(dp[i][j]!=-1)
            return dp[i][j];
        for(int idx=i;idx<=j;idx++){
            int cost = nums[i-1]*nums[idx]*nums[j+1] + solve(i,idx-1,nums,dp) + solve(idx+1,j,nums,dp);
            maxi =  max(maxi,cost);
        }
        
        return dp[i][j] = maxi;
        
    }
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
       // shuru mein last mein 1 jodna h edge case
        nums.push_back(1);
        nums.insert(nums.begin(),1);
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        
        return solve(1,n,nums,dp);
    }
};


//[3,1,5,8]
//1*3*1 = 3
//3*1*5=15
//1*5**=40
//1*8*1 =8

//sum of all will be the ans

    
