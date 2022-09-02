class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>mymap;
        vector<vector<string>> anagrams;
        string temp; 
        
        for(int i=0;i<strs.size();i++){
            temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mymap[strs[i]].push_back(temp);
        }
        for (auto p : mymap) { 
            anagrams.push_back(p.second);
        }
        return anagrams;
        
        
        
    }
};
