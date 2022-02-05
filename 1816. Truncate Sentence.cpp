class Solution {
public:
    string truncateSentence(string s, int k) {
        int cnt=0;
        string str="";
        for(int i=0;i<s.length();i++){
             if(s[i]==' ')
                cnt++;
            if(cnt==k)
                break;
            str.push_back(s[i]);
            
        }
        return str;
    }
};
