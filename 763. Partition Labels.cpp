class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mp;
        vector<int> res;
         for(int i=0;i<s.size();i++)
            mp[s[i]]=i;
        int maxindex =0,lastindex=0;
        for(int i=0;i<s.size();i++){
            maxindex = max(maxindex,mp[s[i]]);
            if(i== maxindex){
                res.push_back(maxindex-lastindex+1);
                lastindex = i+1;
            }
        }
        return res;
    }
    
};
