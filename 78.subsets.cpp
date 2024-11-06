/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int subset_count = 1 << n;
        vector<vector<int>> res(subset_count);

        for (int i = 0; i < subset_count; ++i) {
            vector<int> subset;
            for (int j = 0; j < n; ++j) {
                if (i & (1 << j)) subset.push_back(nums[j]);
            }
            res[i] = subset;
        }
        return res;
    }
};
// @lc code=end

