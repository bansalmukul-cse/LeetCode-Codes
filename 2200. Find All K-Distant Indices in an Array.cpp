class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> res;
        for(int i =0;i<nums.size();i++){
            for(int j =0;j<nums.size();j++){
                if(nums[j]==key)
                {
                    if(abs(i-j)<=k)
                        res.insert(i);
                }
            }
        }
        vector<int> ans(res.begin(),res.end());
        sort(ans.begin(),ans.end());
        return ans;
    }
};
