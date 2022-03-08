// Runtime: 7 ms, faster than 72.03% of C++ online submissions for Sign of the Product of an Array.
// Memory Usage: 10.1 MB, less than 99.31% of C++ online submissions for Sign of the Product of an Array.

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negativeCount = 0;
        
        for(int num : nums)
        {   
            if(num == 0) return 0;
            if(num < 0) negativeCount++;
        }
        
        return negativeCount % 2 == 0 ? 1 : -1;
    }
};