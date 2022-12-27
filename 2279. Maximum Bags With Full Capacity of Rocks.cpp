class Solution {
public:
    int maximumBags(vector<int>& cap, vector<int>& v, int k,int ans=0) {
        int n=v.size();
        vector<int> idx(n);
        for(int i=0;i<n;i++)idx[i]=i;
        sort(idx.begin(),idx.end(),[&](int i,int j){
            return cap[i]-v[i]<cap[j]-v[j];
        });
        for(int i:idx){
            if(k>=cap[i]-v[i])ans+=1,k-=(cap[i]-v[i]);
            else break;
        }
        return ans;
    }
};
