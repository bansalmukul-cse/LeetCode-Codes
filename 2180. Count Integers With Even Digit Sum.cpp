class Solution {
public:
    int countEven(int num) {
         int temp = num, sum = 0;
        while(temp)
        {
            sum += (temp%10);
            temp /= 10;
        }
        if(sum%2==0)
            return num/2;
        else
            return (num-1)/2;
    }
    
};
