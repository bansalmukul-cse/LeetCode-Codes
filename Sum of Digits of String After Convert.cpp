class Solution {
public:
    int getsum(int num){
        int sum =0;
        while(num){
            sum += num%10;
            num/=10;
        }
        return sum;
    }
    int getLucky(string s, int k) {
        int ans =0;
        for(int i=0;i<s.size();i++){
            ans += getsum(s[i]-'a'+1);
        }
        while(--k){
            ans  = getsum(ans);
        }
        return ans;
    }
};
