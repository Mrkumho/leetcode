// Runtime: 116 ms, faster than 59.30% of C++ online submissions for Container With Most Water.
// Memory Usage: 59 MB, less than 81.47% of C++ online submissions for Container With Most Water.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int left = 0;
        int right = height.size() - 1;
        
        while(left < right) {
            maxarea = max(maxarea,min(height[left],height[right]) * (right - left));
            if(height[left] > height[right]) right--;
            else left++;
        }
        
        return maxarea;
    }
};