class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        
        int s = -1, e = -1;
        ///Finding first 2 char mismatch bw strings 
        ///soo that we can swap those pos and check in both s1 and s2
        for(int i = 0; i < s1.size(); ++i)
        {
            if(s1[i] != s2[i])
            {
                if(s == -1)
                    s = i;
                else
                {
                    e = i;
                    break;
                }
            }
        }
        if(s == -1 || e == -1) return false;
        
        //checking strings after swaping in s1
        swap(s1[s], s1[e]);
        if(s1 == s2) return true;
        
        //make s1 back to orginal
        swap(s1[s], s1[e]);
        
        //checking strings after swaping in s2
        swap(s2[s], s2[e]);
        if(s1 == s2) return true;
        
        return false;
    }
};
