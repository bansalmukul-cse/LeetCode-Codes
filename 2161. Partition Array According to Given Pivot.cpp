class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int c=0;
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>pivot)
            {
                v1.push_back(nums[i]);
            }
            else if(nums[i]<pivot){
                v2.push_back(nums[i]);
            }
            else{c++;}
        }
        
        for(int i=0;i<c;i++){
            v2.push_back(pivot);
        }
        for(int i=0;i<v1.size();i++){
            v2.push_back(v1[i]);
        }
        
        
        return v2;
    }
};
