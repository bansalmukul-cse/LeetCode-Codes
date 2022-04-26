//Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
//Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
//Output: 6

class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left(height.size());
        vector<int> right(height.size());
        
        left[0] = height[0];
        //Traversing from left
        for(int i=1;i<height.size();i++){
            left[i]= max(left[i-1],height[i]);
        }
        
        right[height.size()-1]=height[height.size()-1];
        //Traversing from right
        for(int i = height.size()-2; i>=0 ; i--){
            right[i] = max(right[i+1], height[i]);
        }
        
        int ans =0;
        for(int i=0;i<height.size();i++){
            ans += (min(left[i],right[i])) - height[i];
        }
        return ans;
    }
};
