class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       map<int,int>mp;
        for(int i=0;i<matches.size();i++){
            mp[matches[i][1]]++;
        }
        vector<int>onelose;
        vector<int>win;
        for(int i=0;i<matches.size();i++){
            if(mp[matches[i][1]]==1){
                onelose.push_back(matches[i][1]);
               // mp[matches[i][1]]=2;
            }
            if(mp.find(matches[i][0]) == mp.end()){
                win.push_back(matches[i][0]);
                mp[matches[i][0]]=2;
            }
        }
        sort(onelose.begin(),onelose.end());
        sort(win.begin(),win.end());
        
        return {win,onelose};
    }
};
