/*Runtime: 80 ms, faster than 78.87% of C++ online submissions for Subarray Sum Equals K.
Memory Usage: 41.7 MB, less than 16.23% of C++ online submissions for Subarray Sum Equals K.*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> unmap;
        unmap[0]++;
        int count = 0,sum = 0;
        
        for(int i = 0; i< nums.size(); i++)
        {
            sum += nums[i];
            count += unmap[sum-k];
            unmap[sum]++;
        }
        
        return count;
    }
};