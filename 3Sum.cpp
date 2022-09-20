class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>>ans;
        set<vector<int>>s;
        for(int i=0;i<n;i++){
            int target = -nums[i]; /* since nums[i]+nums[j]+nums[k]=0 so now can find rest of the array nums[j]+nums[k]=-nums[i]*/
            int l = i+1;
            int h = n-1;
            while(l<h){
                if(nums[l]+nums[h]==target){
                    s.insert({nums[i],nums[l],nums[h]});
                    l++;
                    h--;
                }
                else if(nums[l]+nums[h]<target)
                    l++;
                else
                    h--;
            }
           
        }
         
       for(auto i:s){
           ans.push_back(i);
       }
        return ans;
    }
};
