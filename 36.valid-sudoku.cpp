/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      for (int i = 0; i < 9; ++i) {
            int rowMask = 0, colMask = 0, boxMask = 0;

            for (int j = 0; j < 9; ++j) {
                int mask = 0, num = 0;
                
                if (board[i][j] != '.') {
                    num = board[i][j] - '0';
                    mask = 1 << num;
                    if (rowMask & mask) return false;
                    rowMask |= mask;
                }

                mask = num = 0;
                if (board[j][i] != '.') {
                    int num = board[j][i] - '0';
                    mask = 1 << num;
                    if (colMask & mask) return false; 
                    colMask |= mask;
                }

                int rowIndex = 3 * (i / 3) + j / 3;
                int colIndex = 3 * (i % 3) + j % 3;
                mask = 0;
                if (board[rowIndex][colIndex] != '.') {
                    int num = board[rowIndex][colIndex] - '0';
                    mask = 1 << num;
                    if (boxMask & mask) return false;
                    boxMask |= mask;
                }
            }
        }
        return true;
    }
};
// @lc code=end

