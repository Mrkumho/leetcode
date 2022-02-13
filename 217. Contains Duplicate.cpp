/*Runtime: 105 ms, faster than 65.29% of C++ online submissions for Contains Duplicate.
Memory Usage: 51.5 MB, less than 47.57% of C++ online submissions for Contains Duplicate.*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> unset;
        
        for(int num : nums)
        {   
            if(unset.count(num)) return true;
            unset.insert(num);
        }
        
        return false;
    }
};