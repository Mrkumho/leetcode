/*Runtime: 12 ms, faster than 69.99% of C++ online submissions for Reshape the Matrix.
Memory Usage: 11 MB, less than 29.36% of C++ online submissions for Reshape the Matrix.*/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        if(mat.size() * mat[0].size() != r * c) return mat;
        queue<int> q;
        
        for(vector<int> v : mat)
        {
            for(int num : v)
            {
                q.push(num);
            }
        }
        
        vector<vector<int>> ans(r,vector<int>(c));

        
        for(int i = 0; i< r; i++)
        {
            for(int j= 0; j<c ; j++)
            {   
                ans[i][j] = q.front();
                q.pop();
                
            }
        }
        return ans;
    }
};