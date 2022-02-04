/*Runtime: 191 ms, faster than 41.45% of C++ online submissions for Contiguous Array.
Memory Usage: 83.7 MB, less than 86.74% of C++ online submissions for Contiguous Array.*/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> unmap;
        int maxLen = 0;
        int cnt = 0;
        unmap[0] = -1;
        
        for(int i = 0; i <nums.size(); i++)
        {
            if(nums[i] == 0) cnt -= 1;
            else cnt += 1;
            
            if(unmap.count(cnt)) maxLen = max(maxLen, i - unmap[cnt]);
            else unmap[cnt] = i;
        }
        
        return maxLen;
    }
};