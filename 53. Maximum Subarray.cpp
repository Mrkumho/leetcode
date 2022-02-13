/*Runtime: 96 ms, faster than 94.66% of C++ online submissions for Maximum Subarray.
Memory Usage: 67.8 MB, less than 11.64% of C++ online submissions for Maximum Subarray.*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = INT_MIN;
        int sum  = 0;
        
        for(int num : nums)
        {
            sum += num;
            mx = max(mx,sum);
            if(sum < 0) sum = 0;
        }
        return mx;
    }
};