class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> v;
        
        int first =0;
        int last =s.length();
        
        for(int i=0; i<s.length(); i++){
            if(s[i]=='I'){
                v.push_back(first);
                first++;   
            }
            else {
                v.push_back(last);
                last--;
            }
        }
        v.push_back(first);
        return s;
    }
};
