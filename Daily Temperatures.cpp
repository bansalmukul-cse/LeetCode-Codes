class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        int n =  temperatures.size()-1;
        vector<int> ans;
        
        for(int i=n;i>=0;i--){
            if(st.empty()){
                st.push(i); //index
                ans.push_back(0);
            }
            else{
                while(!st.empty() &&  temperatures[st.top()]<=  temperatures[i]){
                    st.pop();
                }
                if(st.empty()){
                    st.push(i); //index
                    ans.push_back(0);
                }
                else{
                    ans.push_back(st.top()-i);
                    st.push(i);
                }
                    
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
