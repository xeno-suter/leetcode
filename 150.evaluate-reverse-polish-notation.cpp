/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        int a, b;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();

                if (tokens[i] == "+") {
                    s.push(b + a);
                } else if (tokens[i] == "-") {
                    s.push(b - a);
                } else if (tokens[i] == "*") {
                    s.push(b * a);
                } else if (tokens[i] == "/") {
                    s.push(b / a);
                }
            } else {
                s.push(stoi(tokens[i]));
            }
        }

        return s.top();
    }
};
// @lc code=end

