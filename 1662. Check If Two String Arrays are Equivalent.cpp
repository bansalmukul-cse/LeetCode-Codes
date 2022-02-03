class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a1="",a2="";
        for(int i=0;i<word1.size();i++)
            a1+=word1[i];
        for(int i=0;i<word2.size();i++)
            a2+=word2[i];
        if(a1==a2)return true;
        return false;
    }
};
