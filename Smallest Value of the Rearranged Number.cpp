class Solution {
public:
    long long smallestNumber(long long num) {
        if(!num) return num; 
        
        int sign = (num>0)? 1 : -1;
        
        string s = to_string(abs(num));
        
        sort(s.begin(), s.end());
            
        if(sign==-1)
        {
            reverse(s.begin(), s.end());
        }
                
        int j=0;
        
        while(s[j]=='0')
        {
            j++;
        }
        
        swap(s[0],s[j]);
        
        return sign * stol(s);
    }
};
