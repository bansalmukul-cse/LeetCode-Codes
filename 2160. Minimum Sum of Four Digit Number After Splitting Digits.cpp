class Solution {
public:
    int minimumSum(int num) {
         int arr[4],i=0, num1=0, num2=0;
        while(num!=0){
            arr[i]=num%10;
            num=num/10;
            i++;
        }
        sort(arr,arr+4);
        num1= arr[0]*10+arr[3];
        num2= arr[1]*10+arr[2];
        return num1 + num2;
        
    }
};
