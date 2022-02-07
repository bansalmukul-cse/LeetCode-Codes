class Solution {
public:
    string interpret(string c) {
        string s="";
       for(int i=0;i<c.size();i++)
       {
           if(c[i]=='('&&c[i+1]==')')
               s+='o' ;
           else if(c[i]!='('&&c[i]!=')')
               s+=c[i];
       }
        return s;
    }
};
