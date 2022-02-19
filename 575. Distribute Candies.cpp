class Solution {
public:
    int distributeCandies(vector<int>& nums) {
        int n =  nums.size();
        int res = n/2;
        unordered_set<int> set;
        for(int i=0;i<n;i++){
            set.insert(nums[i]);
        }
        
        if(res<set.size())
            return n/2;
        else
              return set.size();
         
        
      
        
    }
};
