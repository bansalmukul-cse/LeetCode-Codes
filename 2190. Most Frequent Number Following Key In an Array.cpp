class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int> mp;
        int freq = INT_MIN;
        int ans ;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key)
                mp[nums[i+1]]++;
        }
        for(auto i:mp){
            if(i.second>freq){
                ans = i.first;
                freq = i.second;
            }
                
        }
        return ans;
    }
};
