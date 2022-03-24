class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        for(int i =1;i<=*max_element(groupSizes.begin(),groupSizes.end());i++){
            vector<int> subans;
            for(int j=0;j<groupSizes.size();j++){
                if(groupSizes[j]==i){
                    if(subans.size()>=i){
                        ans.push_back(subans);
                        subans.clear();
                    }
                    subans.push_back(j);
                }
            }
            if(subans.size())
                ans.push_back(subans);
        }
        return ans;
    }
};
