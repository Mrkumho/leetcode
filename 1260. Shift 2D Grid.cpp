// Runtime: 30 ms, faster than 76.64% of C++ online submissions for Shift 2D Grid.
// Memory Usage: 14.4 MB, less than 31.34% of C++ online submissions for Shift 2D Grid.

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        queue<int> q;
        
        for(int i = n -1 ; i >= 0; i--) {
            for(int j = m -1 ; j >= 0; j--) {
                q.push(grid[i][j]);
            }
            
        }
        
        int count = k % q.size();
        
        while(count--) {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        
        for(int i = n -1; i >= 0; i--) { 
            for(int j = m -1; j >= 0; j--) {
                grid[i][j] = q.front();
                q.pop();
            }
        }
        
        return grid;
    }
};