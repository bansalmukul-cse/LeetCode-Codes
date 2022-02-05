class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
       int ans=0;
        for(int i=0;i<arr.size()-2;i++){
            for(int j=i+1;j<arr.size()-1;j++){
                if(abs(arr[j]-arr[i])<=a)
                    for(int k=j+1;k<arr.size();k++){
                        if(abs(arr[k]-arr[j])<=b and abs(arr[k]-arr[i])<=c)
                            ans++;
                    }
            }
        }
        return ans;
    }
};
