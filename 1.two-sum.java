
import java.util.HashMap;
import java.util.Map;

/*
 * @lc app=leetcode id=1 lang=java
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> numbers = new HashMap<>();

        for (int idx = 0; idx < nums.length; idx++) {

            int complement = target - nums[idx];
            if (numbers.containsKey(complement)) {
                return new int[] { numbers.get(complement), idx };
            }

            numbers.put(nums[idx], idx);
        }

        return null;
    }
}
// @lc code=end

