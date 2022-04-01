// Runtime: 19 ms, faster than 91.83% of C++ online submissions for Reverse String.
// Memory Usage: 23.1 MB, less than 76.65% of C++ online submissions for Reverse String.

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() -1 ;
        
        while(left <= right) {
            char temp = s[left];
            s[left++] = s[right];
            s[right--] = temp;
        }
    }
};