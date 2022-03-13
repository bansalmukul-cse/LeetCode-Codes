class Solution {
public:
   int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3)  //if size is less then 3 then it can't be a Arithmetic
            return 0;
        int res=0;
        for(int i=0;i<nums.size()-2;i++) // loop from 1st to 3rd last element
        {
            int d = nums[i+1]-nums[i]; // difference of 2 element 
            //An integer array is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same.
            for(int j=i+2;j<nums.size();j++) // loop from 3rd to last element 
            {
                if(nums[j]-nums[j-1]==d)  // we will increase j and if the diffrence between 2 elements stay equal then is a Arithmetic.
                    res++;
                else
                    break;
            }
        }
        return res;
    }
};
