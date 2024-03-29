class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int res=0;
        unordered_map<string,int> mp1;
        unordered_map<string,int> mp2;
        for(auto i : words1)
            mp1[i]++;
        for(auto i:words2)
            mp2[i]++;
        for(auto j :words1){
            if(mp1[j]== 1 && mp2[j]==1)
                res++;
        }
        return res;  
    }
};
