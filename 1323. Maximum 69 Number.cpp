class Solution {
public:
    int maximum69Number (int num) {
        string res = to_string(num);
        for(auto &c : res){
            if(c == '6')
            {
                c = '9';
                break;
            }
            
             
        }
        return stoi(res);
    }
};
