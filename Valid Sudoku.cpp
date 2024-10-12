class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> cols;
        unordered_map<int, unordered_set<char>> boxes;

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                char val = board[r][c];
                if (val == '.') continue;

                // Check if the value already exists in row, column, or 3x3 box
                if (rows[r].count(val) || cols[c].count(val) || boxes[(r / 3) * 3 + c / 3].count(val)) {
                    return false;
                }

                // Add value to the corresponding row, column, and box sets
                rows[r].insert(val);
                cols[c].insert(val);
                boxes[(r / 3) * 3 + c / 3].insert(val);
            }
        }
        return true;
    }
};
