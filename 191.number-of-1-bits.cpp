/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(int n) {
        short r = 0;
        while (n) {
            r += (n & 1);
            n >>= 1;
        }
        return r;
    }
};

// @lc code=end

