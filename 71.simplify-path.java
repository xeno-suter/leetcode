import java.util.Stack;

/*
 * @lc app=leetcode id=71 lang=java
 *
 * [71] Simplify Path
 */

// @lc code=start
class Solution {
    public String simplifyPath(String path) {
        Stack<String> s = new Stack<>();
        for (String x : path.split("/")) {
            if (x.equals("..")) {
                if (!s.isEmpty()) {
                    s.pop();
                }
            } else if (!x.isEmpty() && !x.equals(".")) {
                s.push(x);
            }
        }

        StringBuilder sb = new StringBuilder();
        for (String x : s) {
            sb.append("/").append(x);
        }

        return sb.length() > 0 ? sb.toString() : "/";
    }
}
// @lc code=end

