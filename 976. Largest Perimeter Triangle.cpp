// Runtime: 89 ms, faster than 5.29% of C++ online submissions for Largest Perimeter Triangle.
// Memory Usage: 22 MB, less than 23.26% of C++ online submissions for Largest Perimeter Triangle.

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i = nums.size() -1 ; i > 1; i--)
        {
            if(nums[i] < nums[i -1] + nums[i -2]) return nums[i] + nums[i-1] + nums[i -2];
        }
        
        return 0;
    }
};