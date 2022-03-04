class Solution {
public:
    int compareVersion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        int i=0,j=0;
        int num1=0,num2=0;
        while(i<n1 || j<n2){
            while(i < n1 && s1[i] != '.'){
                num1 = num1*10 + (s1[i]-'0');
                i++;
            }
            while(j < n2 && s2[j] != '.'){
                num2 = num2*10 + (s2[j]-'0');
                j++;
            }
            
            if(num1>num2)
                return 1;
           if(num2>num1)
                return -1;
            num1 = 0, num2 = 0;
            i++;
            j++;
        }
        
        return 0;
    }
};
