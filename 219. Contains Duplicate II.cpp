class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector< pair<int,int>> res;
        for(int i=0;i<nums.size();i++){
            res.push_back(make_pair(nums[i],i));
        }
        sort(res.begin(),res.end());
        
        for(int i=0;i<res.size()-1;i++){
            if((res[i].first == res[i+1].first) && (abs(res[i].second-res[i+1].second)<=k))
                return true;
        }
        return false;
    }
};
