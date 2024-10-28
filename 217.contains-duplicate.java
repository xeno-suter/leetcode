import java.util.HashSet;

/*
 * @lc app=leetcode id=217 lang=java
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> m = new HashSet<>();

        for (int num : nums) {
            if (!m.add(num)) {
                return true;
            }
        }

        return false;
    }
}
// @lc code=end

