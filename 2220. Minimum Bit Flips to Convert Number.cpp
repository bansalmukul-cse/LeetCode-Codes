class Solution {
public:
    int minBitFlips(int start, int goal) {
        int res =0;
        int count =0;
        res = start^goal;
        while(res){
            
            count += res & 1;
            res >>= 1;
        }
        return count;
    }
};
