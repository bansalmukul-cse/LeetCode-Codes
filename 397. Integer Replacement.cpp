class Solution {
public:
    int integerReplacement( long long int n) {
        int cnt =0;
        while(n!=1){
            if(n%2==0){
                n = n/2;
                cnt++;
            }
            else{
                int temp = (n-1)/2;
                if(temp==1 || temp%2==0)
                    n--;
                else
                    n++;
                cnt++;
                
            }
        }
        return cnt;
    }
};
