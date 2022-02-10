class Solution {
public:
    int xorOperation(int n, int start) {
        int a[n];
        for(int i=0;i<n;i++)
        {
            a[i] = start + (2 * i);
        }
        int ans = 0;
        for(int i=0;i<n;i++)
            ans = ans ^ a[i];
        return ans;
    }
};
