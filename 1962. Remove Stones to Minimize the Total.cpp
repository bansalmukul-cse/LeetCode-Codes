class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(int i=0;i<piles.size();i++){
            pq.push(piles[i]);
        }
        
        for(int i=0;i<k;i++){
            int ele=pq.top();
            pq.pop();
            
            int val=(ele/2)+(ele%2!=0);
            // cout << val << " ";
            pq.push(val);
        }
        
        int sum=0;
        while(pq.size()>0){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};
