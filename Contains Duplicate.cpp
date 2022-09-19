class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int,int> a;
        for(auto &i:nums)
        {
            a[i]++;
        }
        
        for(auto &x:a)
        {
            if(x.second>1)
                return true;
        }
        
        return false;
        
        
        
    }
};
