class Solution {
public:
    
     int n = s.length();
     int stack=0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='[')
            {
                stack++;
            }
            else
            {
                //only we will reduce if we have the opening the bracket
                //so we are checking this condition
               if(stack > 0 ) 
               {
                   stack--;
               }
            }
        }
        
        return (stack+1)/2;
        
    
    }
};
