class Solution {
public:
    int mySqrt(int x) {
         if(x <= 1)
            return x;

        int lo = 1, hi = x / 2, ans;

        while(lo <= hi) {
            int mid = (lo + hi) >> 1;

            if(mid <= x / mid)
                ans = mid, lo = mid + 1;
            else
                hi = mid - 1;
        }

        return ans;
    }
};
