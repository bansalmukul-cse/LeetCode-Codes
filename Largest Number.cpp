class Solution {
public:
   struct compare{
    bool operator() (string &s1,string &s2)
    {
        return s1+s2 > s2+s1; 
    }
              };
    string largestNumber(vector<int>& nums) {
        vector<string>v;
        
        for(auto i:nums){
            v.push_back(to_string(i));
        }
        
        sort(v.begin(),v.end(),compare());
        
        string str = "";
        
        for(int i=0;i<nums.size();i++){
        str+=v[i];
        }
        
         if(str.length()>nums.size()) return str;
        
         return to_string(stoll(str));
        
        
    }
};
