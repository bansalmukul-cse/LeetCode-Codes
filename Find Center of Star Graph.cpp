class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        unordered_map<int,int>mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;
        }
        
        for(auto x:mp){
            if(x.second==n)
                return x.first;
        }
         return -1;
    }
};
