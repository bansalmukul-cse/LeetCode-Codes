class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int> ans;
        int sumA=0,sumB=0;
        unordered_set<int> a;
        for(int i=0;i<aliceSizes.size();i++)
        {
            a.insert(aliceSizes[i]);
            sumA+=aliceSizes[i];
        }
        for(int i=0;i<bobSizes.size();i++)
        {
            sumB+=bobSizes[i];
        } 
        int diff = (sumB - sumA)/2;
        for(int i =0;i<bobSizes.size();i++){
            if(a.count(bobSizes[i]-diff))
                return {bobSizes[i]-diff,bobSizes[i]};
        }
        return ans;
    }
};
