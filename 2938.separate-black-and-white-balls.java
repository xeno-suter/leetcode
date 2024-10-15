/*
 * @lc app=leetcode id=2938 lang=java
 *
 * [2938] Separate Black and White Balls
 */

// @lc code=start
class Solution {
    public long minimumSteps(String s) {
        int blackBallCount = 0;
        long totalSwaps = 0;

        for (char c : s.toCharArray()) {
            if (c == '0') {
                totalSwaps += blackBallCount;
            } else {
                blackBallCount++;
            }
        }

        return totalSwaps;
    }
}
// @lc code=end

