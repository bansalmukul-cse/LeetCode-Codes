class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0, sm=0, mod=0; // Initialize variables to keep track of count, running sum and remainder
        unordered_map<int, int> mp; // Initialize an unordered_map to keep track of the number of occurrences of each remainder
        mp[mod]++; // Add the initial remainder (0) to the map with a count of 1
        for(int i=0;i<nums.size();i++){
            sm += nums[i]; // Update the running sum
            mod = sm%k; // Update the remainder
            if(mod < 0)
                mod += k; // If the remainder is negative, add k to make it positive
            if(mp.find(mod)!=mp.end()){ // Check if the remainder is already present in the map
                count += mp[mod]; // If it is, add the number of occurrences of that remainder to the count
                mp[mod]++; // Increment the count for that remainder in the map
            }
            else
                mp[mod]++; // If the remainder is not present in the map, add it with a count of 1
        }
        return count;
    }
};
