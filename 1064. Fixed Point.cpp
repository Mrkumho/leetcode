// Runtime: 8 ms, faster than 87.85% of C++ online submissions for Fixed Point.
// Memory Usage: 10.6 MB, less than 16.55% of C++ online submissions for Fixed Point.

class Solution {
public:
    int fixedPoint(vector<int>& arr) {
        for(int i = 0; i< arr.size(); i++)
        {
            if(arr[i] == i) return i;
        }        
        return -1;
    }
};