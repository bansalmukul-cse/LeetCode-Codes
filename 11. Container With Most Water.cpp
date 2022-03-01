class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxs =0;
        for(int left=0; int right=height.size()-1;left<right){
            int lh = height[left];
            int rh = height[right];
            int res_height = min(lh,rh);
            maxs = max(maxs, (res_height*(right-left)));
            if(lh<rh)
                left++;
            else
                right--;
        }
        return maxs;
        
    }
};
