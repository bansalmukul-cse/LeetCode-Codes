class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> res;
        for(auto i : nums){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second==2)
                res.push_back(i.first);
        }
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0)
                res.push_back(i);
      }   
       return res;
    }
};
