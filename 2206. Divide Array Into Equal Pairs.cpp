class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second % 2!=0)
                return false;
        }
        return true; 
        
    }
};
