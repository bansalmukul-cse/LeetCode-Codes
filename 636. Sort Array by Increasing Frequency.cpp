class Solution {
public:
    static bool cmp(pair<int,int>&a, pair<int,int>&b) {
        return  (a.second==b.second) ? a.first>b.first : a.second<b.second;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> val_freq;
        for(auto i :mp){
            val_freq.push_back(i);
        }
        sort(val_freq.begin(),val_freq.end(),cmp);
        vector<int> res;
        for(auto v :val_freq){
            for(int i=0;i<v.second;i++){
                res.push_back(v.first);
            }
        }
        return res;
            
        
    }
};
