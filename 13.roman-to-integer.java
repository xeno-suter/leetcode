/*
 * @lc app=leetcode id=13 lang=java
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
    public int romanToInt(String s) {
        int r = 0;
        int n = s.length();
        
        int[] roman = new int[26];
        roman['I' - 'A'] = 1;
        roman['V' - 'A'] = 5;
        roman['X' - 'A'] = 10;
        roman['L' - 'A'] = 50;
        roman['C' - 'A'] = 100;
        roman['D' - 'A'] = 500;
        roman['M' - 'A'] = 1000;

        for (int i = 0; i < n; i++) {
            int current = roman[s.charAt(i) - 'A'];
            int next = (i < n - 1) ? roman[s.charAt(i + 1) - 'A'] : 0;
            
            if (current < next) {
                r -= current;
            } else {
                r += current;
            }
        }

        return r;
    }
}
// @lc code=end

