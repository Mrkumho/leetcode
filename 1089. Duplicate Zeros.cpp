Runtime: 118 ms, faster than 15.11% of C++ online submissions for Duplicate Zeros.
Memory Usage: 9.7 MB, less than 45.50% of C++ online submissions for Duplicate Zeros.

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        if(arr.size() == 0) return;
        
        for(int i = 0 ; i< arr.size(); i++)
        {
            if(arr[i] == 0)
            {
                for(int j = arr.size() -1; j>i; j--)
                {
                    arr[j] = arr[j-1];
                }
                i++;
            }
        }
        
        return;
    }
};