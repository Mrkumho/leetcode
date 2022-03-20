// Runtime: 3 ms
// Memory Usage: 6.2 MB

class Solution {
public:
    int climbStairs(int n) {
        vector<int> cache(n+1,-1);
        return dp(n,cache);
    }
    
    int dp(int n,vector<int>& cache){
        if(n<=3) return n;
        if(cache[n] != -1) return cache[n];
        
        cache[n] = dp(n-1,cache) + dp(n-2,cache);
        
        return cache[n];
    }
};