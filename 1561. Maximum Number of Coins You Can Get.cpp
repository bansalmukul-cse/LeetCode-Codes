class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int j= piles.size()-2;
        int res =0;
        for(int i=0;i<piles.size()/3;i++){
            res+=piles[j];
            j =j-2;
        }
        return res;
    }
};

 
