// Runtime: 0 ms, faster than 100.00% of C++ online submissions for House Robber.
// Memory Usage: 7.8 MB, less than 47.71% of C++ online submissions for House Robber.

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        cache.resize(n, -1);
        
        return dp(nums,n -1);
    }
    
    int dp(vector<int>& nums, int n) {
        if( n == 0) return nums[0];
        if( n == 1) return max(nums[0],nums[1]);
        
        if(cache[n] != -1) return cache[n];
        
        cache[n] = max(dp(nums, n-1),dp(nums, n-2) + nums[n]);
        
        return cache[n];
    }
private:
    vector<int> cache;
};