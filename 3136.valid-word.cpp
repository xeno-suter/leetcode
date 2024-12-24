/*
 * @lc app=leetcode id=3136 lang=cpp
 *
 * [3136] Valid Word
 */

// @lc code=start
class Solution {
public:
    bool isValid(string word) {
        int info = 0;

        for (char ch : word) {
            if (!isalnum(ch)) {
                return false;
            }

            info += (1 << 2);

            if (isalpha(ch)) {
                char lowerCh = tolower(ch);
                if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
                    info |= 1;
                } else {
                    info |= (1 << 1);
                }                
            }
        }

        return (info >> 2) >= 3 && (info & 1) && (info & 1 << 1);
    }
};
// @lc code=end

