class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0,right=0;
        set<char> res;
        int maxs =0;
        while(right<s.length()){
            if(res.count(s[right])==0){
                 // if we find any dupliacte char so increse right++
                
                res.insert(s[right]);
                maxs= max(maxs,right-left+1);
                right++;
            }
            else{
                // if character found remove all left until left and char itself also;
                res.erase(s[left]);
                left++;
            }
        }
        return maxs;
        
    }
};

//https://www.youtube.com/watch?v=jHj13UHURr8&ab_channel=PrakashShukla
