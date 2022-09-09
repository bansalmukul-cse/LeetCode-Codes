class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='1' && s[i]<='9' && s[i+1]>='0' && s[i+1]<='9' && s[i+2]=='#'){
                int j= s[i]-'0';
                int val=j*10+ (s[i+1]-'0');
                char ch='a' + (val-1);
                ans.push_back(ch);
                i+=2;
            }
            else{
                int val=s[i]-'0';
                char ch='a'+(val-1);
                ans.push_back(ch);
            }
        }
        return ans;
    }
};
