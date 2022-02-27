class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        int left =0,right=0;
        while(left<m && right<n){
            if(s[left]==t[right])
                left++;
            right++;
        }
        return left == m ? 1 : 0;
        
        
    }
};
