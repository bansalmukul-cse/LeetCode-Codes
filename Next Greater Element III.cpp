class Solution {
public:
    int nextGreaterElement(int n) {
      string a = to_string(n);
        n = a.size();
        int s = -1, e;
        for(int i = n-2; i>=0; --i){
            if(a[i] < a[i + 1]){
                s = i;
                break;
            }
        }
        if(s< 0){
            return -1;
        }
        for(int i = n- 1; i>=0; --i){
            if(a[i] > a[s]){
                e = i;
                break;
            }
        }
        // cout<<s<<" "<<e;
        swap(a[s], a[e]);
        reverse(a.begin()+ s + 1, a.end());
        long long x = stoll(a);
        if(x > INT_MAX) return -1;
        return x;
      
    }
};
