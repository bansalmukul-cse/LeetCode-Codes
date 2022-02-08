class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i;
        for( i=0;i<s.length();){
            if(s[i]==t[i])
                i++;
            else
                return t[i];
            
        }
        return t[i];
    }
};
