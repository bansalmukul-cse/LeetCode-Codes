class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        //aditya verma (count occurence of anagram ) with mnior change
        vector<int> ans;
        unordered_map<char,int> m;
        for(auto x:p)
            m[x]++;
        int count=m.size();
        int i=0,j=0,k=p.size();
        
        
        while(j<s.size())
        {
            if(m.find(s[j])!=m.end())
            {
                m[s[j]]--;
                if(m[s[j]]==0)
                    count--;
            }
            if(j-i+1<k)j++;
            else if(j-i+1==k)
            {
                if(count==0)
                    ans.push_back(i);
                
                if(m.find(s[i])!=m.end())
                {
                    m[s[i]]++;
                    if(m[s[i]]==1)
                        count++;
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};
