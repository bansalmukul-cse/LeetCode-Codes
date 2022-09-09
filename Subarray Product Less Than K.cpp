class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)return 0;
    int i=0,j=0,pro=1,count=0;
    while(j<nums.size()){
        pro*=nums[j];
        while(pro>=k){
            pro/=nums[i];
            i++;
        }
        count+=1+(j-i);
        j++;
    }
    return count;
    }
};
