class Solution {
public:
    bool areNumbersAscending(string s) {
        istringstream ss(s);
        string word ;
        int position =0;
        while(ss>>word){
            if(isdigit(word[0])){
                if(stoi(word)<=position)
                    return false;
                position = stoi(word);
            }
        }
        return true;
        
    }
};
