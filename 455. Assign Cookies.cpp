class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       int len_g = g.size();
        int len_s = s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i = 0,j = 0,ans = 0;
        while(i < len_g && j < len_s){
            if (s[j] >= g[i]){ 
                ans++;
                i++;
            }
            j++;
        }
        return ans; 
    }
};
