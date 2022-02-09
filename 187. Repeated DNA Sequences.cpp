class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size()<10) return {};
        unordered_map<string,int> mp;
        for(int i=0;i<s.size()-9;i++){
            string temp = s.substr(i,10);
            mp[temp]++;
        }
        vector<string> res;
        for(auto i:mp){
            if(i.second>1)
                res.push_back(i.first);
            cout<<i.first<<" ";
        }
        return res;
    }
};
