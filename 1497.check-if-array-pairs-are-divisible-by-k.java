/*
 * @lc app=leetcode id=1497 lang=java
 *
 * [1497] Check If Array Pairs Are Divisible by k
 */

// @lc code=start
class Solution {
    public boolean canArrange(int[] arr, int k) {
        int[] remainderFreq = new int[k];
        
        for (int num : arr) {
            int remainder = (num % k + k) % k;

            remainderFreq[remainder]++;
        }

        if ((remainderFreq[0] & 1) != 0) {
            return false;
        }

        for (int i = 1; i <= (k >>> 1); i++) {
            if (remainderFreq[i] != remainderFreq[k - i]) {
                return false;
            }
        }

        return true;
    }
}
// @lc code=end

