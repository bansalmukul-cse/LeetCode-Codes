class Solution {
private:
    bool check(vector<int> &temp){
        int diff = temp[1] - temp[0]; 
        for(int i=1;i<temp.size()-1;i++){
            if(temp[i+1] - temp[i] != diff){
                    return false;
            } 
        }
        return true;
    }
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector <bool> ans;
        vector <int> temp;
        for(int i=0;i<l.size();i++){
            int le = l[i],re = r[i];
            temp.clear();
            for(int i=le;i<re+1;i++){
                temp.push_back(nums[i]);
            }
            sort(temp.begin(),temp.end());
            bool tu = check(temp);
            ans.push_back(tu);
        }
        return ans;
    }
};
