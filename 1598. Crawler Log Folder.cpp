class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> res;
        for(string &s:logs){
            if(s =="../"){
                if(!res.empty()){
                    res.pop();
                }
            }
            else if (s == "./")
                continue;
            else
                res.push(s);
                
            
        }
        return res.size();
    }
};
