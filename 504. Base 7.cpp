class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
            return "0";
        string ans = "";
        bool isneg = false;
        if(num<0){
            isneg = true;
            num*=-1;
            
        }
        while(num){
            int mod  = num%7;
            ans += to_string(mod);
            num /=7;
        }
        reverse(ans.begin(),ans.end());
         if(isneg) ans = '-' + ans;
        
        return ans;
    }
};
