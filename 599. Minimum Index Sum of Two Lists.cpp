class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> mp;
        vector<string>st;
        int sum =INT_MAX;
        for(int i=0;i<list1.size();i++){
            mp[list1[i]] =i;
        }
        for(int i=0;i<list2.size();i++){
            if(mp.find(list2[i])!=mp.end()){
                if(i+mp[list2[i]]<sum){
                    sum=i+mp[list2[i]];
                    if(!st.empty()) 
                       st.clear();
                    st.push_back(list2[i]);
                } 
                else if(i+mp[list2[i]]==sum)
                    st.push_back(list2[i]);
                
            }
        }
        return st;
    }
};
