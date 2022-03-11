class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> res;
        int mindiff = INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            mindiff = min(abs(arr[i]-arr[i+1]),mindiff);
        }
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]== mindiff){
                res.push_back({arr[i],arr[i+1]});
            }
        }
        return res;
    }
};
