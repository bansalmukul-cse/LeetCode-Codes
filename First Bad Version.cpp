// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n<1) return 1;
       int ans=1,left=1,right=n;
       while(left<=right){
           int m=left+(right-left)/2;
           if(isBadVersion(m)){
             ans=m;
             right=m-1;
           }
           else left=m+1;
       }
        return ans;
    }
};

// bibary search cocept 
