class Solution {
public:
    string frequencySort(string s) {
        
       unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>> freq;
        for(auto x :mp){
            freq.push_back({x.second,x.first});
        }
        sort(freq.begin(),freq.end());
        reverse(freq.begin(),freq.end());
        string ans ="";
        for(int i =0;i<freq.size();i++){
            while(freq[i].first>0){
                ans+=freq[i].second;
                freq[i].first--;
            }
        }
        return ans;
        
        
        
    }
};
