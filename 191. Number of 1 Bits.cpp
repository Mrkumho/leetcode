// Runtime: 3 ms, faster than 57.76% of C++ online submissions for Number of 1 Bits.
// Memory Usage: 6 MB, less than 48.18% of C++ online submissions for Number of 1 Bits.

class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int count = 0;
        
        for(int i = 0; i< 32; i++)
        {
            count += 1 & n;
            n >>= 1;
        }
        
        return count;
    }
};