class Solution {
public:
    int balancedStringSplit(string s) {
        int res =0, count1=0,count2=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R')
                count1++;
            else
                count2++;
            if(count1==count2)
                res++;
        }
        return res;
    }
};
