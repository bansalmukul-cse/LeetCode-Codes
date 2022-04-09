class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> res;
        int n = mat.size();
        
        set<pair<int,int> > s;
        
        for(int i=0;i<n;i++){
            // stl function for counting frequency of 1 in current row
            int cnt = count(mat[i].begin(),mat[i].end(),1);
            
            s.insert({cnt,i});
        }
         for(auto i : s)
        {
            if(k == 0)
                break;
            res.push_back(i.second);
            --k;
        }
        return res;
    }
};
