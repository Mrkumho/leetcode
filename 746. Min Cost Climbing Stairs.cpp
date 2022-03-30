// Runtime: 8 ms, faster than 62.89% of C++ online submissions for Min Cost Climbing Stairs.
// Memory Usage: 13.9 MB, less than 11.96% of C++ online submissions for Min Cost Climbing Stairs.

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> cache(n+1,-1);
        
        return dp(cost,cache,n);
    }
    
    int dp(vector<int>& cost, vector<int>& cache, int n) {
        if(n < 2) return 0;
        if(n == 2) return min(cost[0],cost[1]);
        
        if(cache[n] != -1) return cache[n];
        
        cache[n] = min(dp(cost,cache,n-1) + cost[n-1], dp(cost,cache,n-2) + cost[n-2]);
        
        return cache[n];
    }
};