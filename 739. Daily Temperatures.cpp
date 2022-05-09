class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        
        vector<int> res(t.size(), 0);
        stack<pair<int, int>> st;
        for(int i = t.size()-1;i>=0;i--){
            while(!st.empty() && st.top().first <= t[i])
                st.pop();
            
            if(!st.empty())
                res[i] = (st.top().second - i);
            else
                res[i] = 0;
            
            st.push({t[i], i});
        }
        return res;
    }
};
