/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {
public:
    vector<pair<int, int>> v;

    MinStack() {

    }
    
    void push(int val) {
        if (v.empty()) {
            v.push_back({val, val});
        } else {
            v.push_back({val, min(val, v.back().second)});
        }
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v.back().first;
    }
    
    int getMin() {
        return v.back().second;
    }
};
// @lc code=end
