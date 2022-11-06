class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k==1){
            int n = s.size();
            string doublesize = s+s;
            string ans =s;
            for(int i=0;i<n;i++){
                string str  = doublesize.substr(i,n);
                if(str<ans){
                    ans = str;
                }
            }
            return ans;
        }
        sort(s.begin(),s.end());
        return s;
    }
};
