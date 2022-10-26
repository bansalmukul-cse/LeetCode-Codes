class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<pair<int,int>>degree(n+1,{0,0});
        
        for(auto i:trust){
            degree[i[0]].first++;
            degree[i[1]].second++;
        }
        
        for(int i=1;i<=n;i++){
            if(degree[i].first==0 && degree[i].second==n-1){
                return i;
            }
        }
        return -1;
    }
};
