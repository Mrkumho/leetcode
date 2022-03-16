// Runtime: 11 ms, faster than 69.87% of C++ online submissions for Sort Integers by The Number of 1 Bits.
// Memory Usage: 10.1 MB, less than 70.16% of C++ online submissions for Sort Integers by The Number of 1 Bits.

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(),
                [](int a, int b) {
                    int x = a, y = b; 
                    int count_a = 0, count_b = 0; 
					
                    while (x) {
                        count_a++; 
                        x = x & (x - 1); 
                    }
					
                    while (y) {
                        count_b++; 
                        y = y & (y - 1); 
                    }
					
                    return count_a == count_b ? a<b : count_a < count_b;

                }
            ); 
        return arr; 
    }
};