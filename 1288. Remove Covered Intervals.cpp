class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& interval) {
        int count=0, left= -1,right=-1;
        sort(interval.begin(),interval.end());
        for(int i =0;i<interval.size();i++){
            if(interval[i][0] > left && interval[i][1]>right){
                left = interval[i][0];
                count++;
            }
            right = max(right,interval[i][1]);
            
        }
        return count;
    }
};
