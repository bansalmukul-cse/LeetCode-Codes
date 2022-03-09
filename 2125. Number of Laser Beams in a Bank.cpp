class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> ans;
        for(string b : bank){
            int count =0;
            for(int i=0;i<b.size();i++){
                if(b[i]== '1')
                    count++;   
            }
            if(count>0) 
                ans.push_back(count);
        }
        int result  =0;
        for(int i=1;i<ans.size();i++){
            result += ans[i]*ans[i-1];
        }
        return result;
    }
};
