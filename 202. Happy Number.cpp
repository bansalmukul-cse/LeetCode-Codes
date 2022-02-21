class Solution {
public:
    bool isHappy(int n) {
        if(n==1)
            return true;
        if(n<5 && n!=1)
            return false;
        int ans  =0;
        
        while(n>0){
           int temp = n%10;
           temp = temp*temp;
            ans = ans + temp;
            n = n/10; 
        }
        return isHappy(ans);
        
    }
};
