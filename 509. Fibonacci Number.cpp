// Runtime: 0 ms
// Memory Usage: 6.2 MB

class Solution {
public:
    int fib(int n) {
        vector<int> cache(n+1,-1);
        return dp(n,cache);
    }
    
    int dp(int n,vector<int>& cache)
    {
        if(n <= 1) return n;
        if(cache[n] != -1) return cache[n];
        
        cache[n] = dp(n-1,cache) + dp(n-2,cache);
        
        return cache[n];        
    } 
};