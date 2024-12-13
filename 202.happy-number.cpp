/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        
        int r = 0;
        while (n != 1)
        {
            r = 0;
            while (n > 0) {
                int x = n % 10;
                r += x * x;
                n /= 10;
            }

            if (set.find(r) != 0) {
                return false;
            }

            set.insert(r);
            n = r;
        }
        
        return true;
    }
};
// @lc code=end

