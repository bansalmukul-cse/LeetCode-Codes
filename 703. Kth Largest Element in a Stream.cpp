class KthLargest {
    
public:
    priority_queue<int,vector<int>, greater<int>> res;
    int size ;
    KthLargest(int k, vector<int>& nums) {
        size=k;
        for(int i=0;i<nums.size();i++){
            res.push(nums[i]);
            if(res.size()>k)
                res.pop();
        }
    }
    
    int add(int val) {
        res.push(val);
        if(res.size()>size)
                res.pop();
        return res.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
