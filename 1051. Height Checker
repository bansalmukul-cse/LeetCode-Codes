class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count =0;
         vector<int> vect2(heights);
        sort(vect2.begin(),vect2.end());
        for(int i=0; i<heights.size();i++){
            if(heights[i]!=vect2[i])
               count++; 
        }
        return count;
    }
};
