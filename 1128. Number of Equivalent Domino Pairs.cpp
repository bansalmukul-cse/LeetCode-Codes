class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& d) {
        map<pair<int,int>,int> mp;
        int count =0;
        
        for(int i=0;i<d.size();i++){
            sort(d[i].begin(),d[i].end());
            mp[{d[i][0],d[i][1]}]++;
        }
        for(auto x :mp){
            int n = x.second;
            count += n*(n-1) /2;
        }
        
       return count;
            
    }
};
