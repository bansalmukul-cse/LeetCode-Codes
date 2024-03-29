class Solution {
public:
    string reverseWords(string s) {
        int j = 0;
        
        // Reversing all words except the last word
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                reverse(s.begin() + j, s.begin() + i);
                j = i + 1;
            }
        }
        
        // Reversing the last word
        reverse(s.begin() + j, s.end());
        
        return s;
    }
};
