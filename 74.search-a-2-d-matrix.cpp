/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int r = matrix.size() * matrix[0].size() - 1;

        int mid;
        while (l <= r) {
            mid = (l + r) >> 1;

            if (matrix[mid / matrix[0].size()][mid % matrix[0].size()] == target) {
                return true;
            } else if (target < matrix[mid / matrix[0].size()][mid % matrix[0].size()]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return false;
    }
};
// @lc code=end

