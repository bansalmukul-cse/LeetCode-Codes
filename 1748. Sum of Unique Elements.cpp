class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
          vector<int> vec(101,0);//initializing vector to 0
        int sum =0;
        for(int i=0;i<nums.size();i++){
            
            vec[nums[i]]++;
            
        }
        
        for(int i=1;i<101;i++){
            //it means ith element is present only once in the nums
            if(vec[i]==1){
                sum = sum + i;
            }
            
        }
     
        return sum;
    }
};
