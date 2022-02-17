/*Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pascal's Triangle.
Memory Usage: 6.4 MB, less than 91.66% of C++ online submissions for Pascal's Triangle.*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        ans.push_back({1});
        if(numRows == 1) return ans;
        
        ans.push_back({1,1});
        if(numRows == 2)  return  ans;
        
        vector<int> v;
        for(int i = 3; i<=numRows ; i++)
        {
            v.resize(i,1);
            for(int j = 1; j< i - 1; j++)
            {
                v[j] = ans[i-2][j-1] + ans[i-2][j];
            }
            
            ans.push_back(v);
        }
        
        return ans;
    }
};