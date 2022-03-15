class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>freq;
        int res = 0;
        int oddCount = 0;
        for(int i = 0; i < s.length(); ++i){
            freq[s[i]]++;
        }
        /*
            two cases:
                if current counter is even, take all
                if current counter is odd, take even part, and set one as the mid part.
        */
        for(auto i : freq){
            if(i.second % 2 == 0){
                res += i.second;
            }else{
                res += i.second -1;
                oddCount = 1;
            }
        }
        
        return res + oddCount;
    }
};
