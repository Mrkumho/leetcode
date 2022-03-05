// Runtime: 13 ms, faster than 45.83% of C++ online submissions for Delete and Earn.
// Memory Usage: 14 MB, less than 15.60% of C++ online submissions for Delete and Earn.

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> buckets(10001,0);
        
        for(int num : nums)
        {
            buckets[num] += num;
        }
        
        vector<int> dp(10001,0);
        
        dp[1] = buckets[1];
        for(int i = 2; i < dp.size(); i++)
        {
            dp[i] =max(dp[i-1],dp[i-2] + buckets[i]);
        }
        
        return dp[10000];
    }
};