class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,unordered_set<int>>mp;
        vector<int> ans(k);
        for(int i=0;i<logs.size();i++){
            int id =logs[i][0];
            int time = logs[i][1];
            mp[id].insert(time);
        }
        for(auto i: mp){
            ans[i.second.size()-1]++;
        }
        return ans;
    }
};
