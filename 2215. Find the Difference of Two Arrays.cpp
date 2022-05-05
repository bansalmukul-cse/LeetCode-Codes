class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1,s2;
        
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        vector<vector<int>>res; // for storing both array uncommon elements
        vector<int> res1;
        vector<int> res2;
        for(auto i:s1){
            if(s2.find(i)==s2.end())
                res1.push_back(i);
        }
        
        for(auto i:s2){
            if(s1.find(i)==s1.end())
                res2.push_back(i);
        }
        
        res.push_back(res1);
        res.push_back(res2);
        
        return res;
    }
};
