// Runtime: 9 ms, faster than 23.12% of C++ online submissions for Search a 2D Matrix.
// Memory Usage: 9.6 MB, less than 5.69% of C++ online submissions for Search a 2D Matrix.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if(m == 0 ) return false;
        
        int n = matrix[0].size();
        int left = 0, right = m * n - 1;
        int pivotIndex, pivotElement;
        
        while(left <= right){
            pivotIndex = left + (right - left) / 2 ;
            pivotElement = matrix[pivotIndex / n][pivotIndex % n];
            if(target == pivotElement) return true;
            
            if(target < pivotElement) right = pivotIndex - 1;
            else left = pivotIndex + 1;
        }
        
        return false;
    }
};