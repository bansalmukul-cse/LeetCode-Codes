class Solution {
public:
    int minOperations(int n) {
        if(n%2==0){
            return (n/2) * (n/2);
        }
        else{
              n = n-1;
            return ((n/2) * ((n/2) + 1));
        }
    }
};


 int minOperations(int n) {
        int sum =0;
        for(int i=1;i<n;i+=2){
            sum += n-i;
        }
        return sum;
    }
