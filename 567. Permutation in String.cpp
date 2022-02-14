class Solution {
public:
     bool areVectorsEqual(vector<int> a, vector<int> b){
        for(int i=0; i<26; i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) 
    {
       vector<int> mp1(26, 0);
        vector<int> mp2(26, 0);
        for(int i=0;i<s1.size();i++)
            mp1[s1[i]-'a']++;
        int i=0,j=0;
        while(j<s2.size())
        {
            mp2[s2[j]-'a']++;    
            if(j-i+1==s1.size()){
                if(areVectorsEqual(mp1,mp2)) return true;
            }
            
            if(j-i+1<s1.size()) j++;
            else{
                mp2[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        return false;
       
    }
};
