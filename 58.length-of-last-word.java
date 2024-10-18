/*
 * @lc app=leetcode id=58 lang=java
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
    public int lengthOfLastWord(String s) {
        int lenght = 0;

        int p = s.length() - 1;
        while (p >= 0) {
            if (s.charAt(p) == ' ') {
                if (lenght != 0) {
                    return lenght;
                }
            } else {
                lenght++;
            }

            p--;
        }

        return lenght;
    }
}
// @lc code=end

