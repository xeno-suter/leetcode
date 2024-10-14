/*
 * @lc app=leetcode id=70 lang=java
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
    public int climbStairs(int n) {
        int firstStep = 1;
        int secondStep = 2;
        int currentStep = 0;

        if (n == 1) {
            return firstStep;
        }

        if (n == 2) {
            return secondStep;
        }

        for (int i = 3; i <= n; i++) {
            currentStep = firstStep + secondStep;
            firstStep = secondStep;
            secondStep = currentStep;
        }

        return currentStep;
    }
}
// @lc code=end

