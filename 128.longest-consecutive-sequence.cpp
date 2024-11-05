/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0; 

        sort(nums.begin(), nums.end());

        int longestStreak = 0;
        int currentStreak = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                if (nums[i] == nums[i - 1] + 1)
                {
                    currentStreak++;
                }
                else
                {
                    longestStreak = max(longestStreak, currentStreak);
                    currentStreak = 1;
                }
            }
        }

        return max(longestStreak, currentStreak);
    }
};
// @lc code=end

