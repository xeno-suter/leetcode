/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        queue<tuple<string, int, int>> stk;

        stk.push({"", 0, 0});

        while (!stk.empty())
        {
            auto [s, l, r] = stk.front();
            stk.pop();

            if (s.size() == 2 * n)
            {
                res.push_back(s);
                continue;
            }

            if (l < n)
            {
                stk.push({s + "(", l + 1, r});
            }
            
            if (r < l)
            {
                stk.push({s + ")", l, r + 1});
            }
        }

        return res;
    }
};
// @lc code=end

