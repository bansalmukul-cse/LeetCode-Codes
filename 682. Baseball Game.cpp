class Solution {
public:
    int calPoints(vector<string>& ops) {
       vector<int> res;
        int j =-1;
        for(int i=0;i<ops.size();i++){
            if(ops[i]== "+"){
                res.push_back(res[j]+res[j-1]);  // if + we have to add the sum of last 2 elements of vector. (v.push_back perform the job for us.)
                j++;
            }
            else if(ops[i]=="D"){
                res.push_back(2*res[j]);  // if D we have to push twice of the last element (v.push_back() perform the job for us.)
                j++;
            }
            else if(ops[i]=="C"){
                res.pop_back(); // if C we have to delete the last element (v.pop_back() perform the job for us)
                j--;
            }
            else{
                res.push_back(stoi(ops[i]));  // we have to add the add the element ( v.push_back() perform the job for us)
                j++;
            }
        }
        return accumulate(res.begin(),res.end(),0);  // sum of vector elements.
        
    }
};
