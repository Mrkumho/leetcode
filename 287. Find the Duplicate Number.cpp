// Runtime: 172 ms, faster than 48.49% of C++ online submissions for Find the Duplicate Number.
// Memory Usage: 83.9 MB, less than 15.65% of C++ online submissions for Find the Duplicate Number.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        
        for(int num : nums) {
            if(set.count(num)) return num;
            set.insert(num);
        }
        
        return -1;
    }
};