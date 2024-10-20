#include <unordered_map>
#include <vector>

/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;

        for (size_t i = 0; i < nums.size(); i++)
        {
            if (map.contains(nums[i]) && i - map[nums[i]] <= k) {
                return true;
            }

            map[nums[i]] = i;
        }
        
        return false;
    }
};
// @lc code=end

