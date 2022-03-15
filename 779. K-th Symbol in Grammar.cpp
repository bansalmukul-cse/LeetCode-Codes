class Solution {
public:
    int kthGrammar(int N, int k) {
        if(N==1 && k==1)
            return 0;
        int mid = pow(2,N-1)/2;
        if(k<=mid)
            return kthGrammar(N-1,k);
        else
            return !kthGrammar(N-1,k-mid);
    }
};

//replace each occurrence of 0 with 01, and each occurrence of 1 with 10.
//see the pattern
// | is used as mid point
//N=1 [0]
//N=2 [0 | 1]  //first half is copy of N-1 and second half is complement of N-1
//N=3 [0 1 | 1 0]
//N=4 [0 1 1 0 | 1 0 0 1]
//...
