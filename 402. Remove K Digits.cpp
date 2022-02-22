class Solution {
public:
    string removeKdigits(string str, int k) {
        int n = str.length(); // extracting length of the string
        
        stack<char> s; // make stack
        
        for(char c: str) // start traversing from string
        {
            // if top of the stack is greater than our current element, then pop
            while(s.empty() == false && k > 0 && s.top() > c)
            {
                s.pop();
                k = k - 1; // also decrease k
            }
            
            if(s.empty() == true && c == '0') // ignoring any leading zero
            {
                continue;
            }
            else
            {
                s.push(c); // else push element to stack
            }
        }
        
        // case if string given to us is in ascending order, as we dicussesd for the example
        // str = "1234" and k = 1
        while(s.empty() == false && k != 0)
        {
            s.pop();
            k--;
        }
        
        // if stack becomes empty, simply return "0"
        // take example as, str = "1234" and k = 4
        if(s.empty() == true) 
        {
            return "0";
        }
        
        // if we don't want to make anthor sting ans, then we may also store it in
        // given str string, i alsoo do that, see below
        string ans = "";
        
        while(s.empty() == false)
        {
            ans += s.top();
            
            /* if we don't want to make answer string,
            we can also do it in this way
            
             str[n - 1] = s.top();  
             n = n -1;  */
            
            s.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
        
        // if we don't want to use answer string
        //return str.substr(n);

    }
};



//https://leetcode.com/problems/remove-k-digits/discuss/1779871/C%2B%2Bor-Detailed-Explanaion-w-MANY-EXAMPLES-and-DIAGRAMS-or-STACK
