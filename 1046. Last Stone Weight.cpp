class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        while(stones.size()!=1){
            sort(stones.begin(),stones.end());
            int n  = stones.size();
            int prev=stones[n-2];
            int last=stones[n-1];
            
            
            if(prev==last){
                stones.pop_back();
                stones.pop_back();
                stones.push_back(0);
            }
            else{
                
                int mn=min(prev,last);
                int mx=max(prev,last);
                stones.pop_back();
                stones[n-2]=mx-mn;
            }
        }
        return stones[0];
            
    }
};
