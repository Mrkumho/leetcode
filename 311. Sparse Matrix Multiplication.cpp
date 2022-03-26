// Runtime: 27 ms, faster than 16.31% of C++ online submissions for Sparse Matrix Multiplication.
// Memory Usage: 8 MB, less than 99.92% of C++ online submissions for Sparse Matrix Multiplication.

class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
        vector<vector<int>> ans(mat1.size(), vector<int>(mat2[0].size() , 0));
        
        for(int i = 0 ; i < mat1.size(); i++){
            for(int j = 0; j < mat1[0].size(); j++){
                for(int k = 0; k < mat2[0].size(); k++){
                    ans[i][k] += mat1[i][j] * mat2[j][k];
                }
            }
        }
        
        return ans;
    }
};