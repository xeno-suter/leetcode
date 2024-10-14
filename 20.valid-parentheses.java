

/*
 * @lc app=leetcode id=20 lang=java
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
    public boolean isValid(String s) {
        if ((s.length() & 1) != 0) {
            return false;
        } 

        char[] stack = new char[s.length() >> 1];
        int top = -1;
        
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            
            if (c == ')' || c == '}' || c == ']') {
                if (top == -1) {
                    return false;
                }
                
                char topChar = stack[top--];
                
                if ((c == ')' && topChar != '(') || 
                    (c == '}' && topChar != '{') || 
                    (c == ']' && topChar != '[')) {
                    return false;
                }
            } else {
                if (top == stack.length - 1) {
                    return false;
                }
                stack[++top] = c;
            }
        }
        
        return top == -1;
    }
}

// @lc code=end

