// Runtime: 41 ms, faster than 32.98% of C++ online submissions for Valid Sudoku.
// Memory Usage: 20.5 MB, less than 19.27% of C++ online submissions for Valid Sudoku.

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row;
        unordered_set<char> col;
        vector<unordered_set<char>> box(9);
        
        for(int i = 0; i< 9 ; i++)
        {
            for(int j = 0; j< 9 ; j++)
            {   
                if(board[i][j] != '.' and row.count(board[i][j])) return false;
                if(board[j][i] != '.' and col.count(board[j][i])) return false;
                row.insert(board[i][j]);
                col.insert(board[j][i]);
                
                int idx = (i/3)*3 + j/3;
                if(board[i][j] != '.' and box[idx].count(board[i][j])) return false;
                box[idx].insert(board[i][j]);
            }
            row.clear();
            col.clear();
        }
        
        return true;
    }
};