// Runtime: 4 ms, faster than 46.43% of C++ online submissions for Plus One.
// Memory Usage: 8.7 MB, less than 86.13% of C++ online submissions for Plus One.

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i =digits.size()-1;i>=0;i--)
        {
            if(digits[i] == 9) digits[i]=0;
            else 
            {
                digits[i]++;
                return digits;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};