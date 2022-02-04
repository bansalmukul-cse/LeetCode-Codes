class Solution {
public:
    bool isPalindrome(string &s)
    {
        for(int i=0;i<s.length()/2;i++)
        {
            if(s[i]!=s[s.length()-i-1])
            {
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto it:words)
        {
            if(isPalindrome(it))
            {
                return it;
            }
        }
        return "";
    }
};
