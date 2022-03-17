class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int i,j;
        int count =0;
        for( i=0;i<nums.size()-1;i++){
            for( j =i+1;j<nums.size();j++){
                if(nums[i]==nums[j] && (i*j)%k==0)
                    count++;
            }
        }
        return count;
    }
};
