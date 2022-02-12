class Solution {
public:
    string multiply(string num1, string num2) 
    {
        string st{};
        int n = num1.size(), m = num2.size();
        vector<int>val(n+m, 0);

        for(int i{n-1}; i>=0; --i){
            
            for(int j{m-1}; j>=0; --j){
                
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + val[i+j+1]; 
                val[i+j+1] = sum % 10; 
                val[i+j] += sum / 10;
            }
        }

        for(auto &num: val)
            if(st.size() || num )
                st.append(to_string(num));

        if(st.size() == 0) st = "0";
        return st;
    }
};

