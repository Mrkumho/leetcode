// Runtime: 16 ms, faster than 97.82% of C++ online submissions for Move Zeroes.
// Memory Usage: 20.6 MB, less than 5.15% of C++ online submissions for Move Zeroes.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        
        int numsZeroes = 0;
        for (int i = 0; i < n; i++)
        {
            numsZeroes += (nums[i] == 0);
        }
        
        vector<int> ans;
        for(int i = 0; i<n; i++)
        {
            if(nums[i] != 0)
            {
                ans.push_back(nums[i]);
            }
        }
        
        while(numsZeroes--)
        {
            ans.push_back(0);
        }
        
        for(int i = 0; i< n; i++)
        {
            nums[i] = ans[i];
        }
    }
};