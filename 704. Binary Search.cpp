// Runtime: 50 ms, faster than 54.94% of C++ online submissions for Binary Search.
// Memory Usage: 27.6 MB, less than 63.85% of C++ online submissions for Binary Search.

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot, left = 0, right = nums.size() -1;
        
        while(left <= right){
            pivot = left + (right - left) / 2;
            if(nums[pivot] == target) return pivot;
            if(target > nums[pivot]) left = pivot + 1;
            else right = pivot -1;
        }
        
        return -1;
    }
};