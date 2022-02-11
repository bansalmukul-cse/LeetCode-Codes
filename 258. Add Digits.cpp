class Solution {
public:
    int addDigits(int num) {
        if(num<9)
            return num;
        int sum =0;
        do{
            while(num!=0){
                sum+=num%10;
                num = num/10;
            }
            if(sum<10)
                return sum;
            else{
                num=sum;
                sum=0;
            }
        }while (1);
        return sum;
    }
};
