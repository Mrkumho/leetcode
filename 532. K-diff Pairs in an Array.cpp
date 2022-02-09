
/*Runtime: 23 ms, faster than 60.46% of C++ online submissions for K-diff Pairs in an Array.
Memory Usage: 13.3 MB, less than 37.26% of C++ online submissions for K-diff Pairs in an Array. */
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        unordered_map<int,int> unmap;
        for(auto x: nums)
        {
            unmap[x]++;
        }
        
        int count = 0;
    
        for(auto x : unmap)
        {
            if(k == 0 && x.second > 1) count++;
            if(k > 0 && unmap.count(k+x.first)) count++;
        }
        
        return count;
        
    }
};