class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum =0, pro =1;
        int digit;
        
        while(n!=0){
            digit = n %10;
            
            sum +=digit;
            pro *=digit;
            
            n/=10;
        }
        
        return pro-sum;
    }
};
