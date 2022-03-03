class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;
        for(int i =1;i<=100;i++){
            int cnt =0;
            for(auto x:nums1){
                if(x==i){
                    cnt++;
                    break;
                }
            }
            for(auto x:nums2){
                if(x==i){
                    cnt++;
                    break;
                }
            }
            for(auto x:nums3){
                if(x==i){
                    cnt++;
                    break;
                }
            }
            if(cnt>1)
                ans.push_back(i);
        }
        return ans;
    }
};
