class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int n = columnTitle.length();
        int res =0;
        int power =0;
        for(int i=n-1;i>=0;i--){
            int current = columnTitle[i]-'A' +1;
            res += current*pow(26,power);
            power++;
        }
        return res;
        
    }
};
