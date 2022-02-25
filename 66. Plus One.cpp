class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       
      
      for (int i = digits.size() - 1; i >= 0; --i) { 
        if (digits[i] == 9) {  
          digits[i] = 0;
        } else {  
          digits[i] += 1;
          return digits;
        }
      }
      digits.push_back(0);
      digits[0] = 1;
      return digits;
    }
};

//digits.push_back(0);
      //digits[0] = 1;  these two lines are due to to handle  9999+1 = 100000 o is push back to amke one ectra zero and put 1 on firstr place
