class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string ans="";
        for(auto word:words)
        {
            ans+=word;
            if(s==ans)
            return true;
            else if(ans.length()>s.length())
            return false;
        }
        return false;
    }
};
