class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int prev =0;
        int max =0;
        for(auto x:gain){
            prev +=x;
            if(prev>max)
                max = prev;
        }
        return max;
    }
};
