/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        
        for (string& str : strs)
        {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            groups[sorted].push_back(str);
        }

        vector<vector<string>> result;
        for (auto& pair : groups) {
            sort(pair.second.begin(), pair.second.end());
            result.push_back(pair.second);
        }

        //sort(result.begin(), result.end());
        return result;
    }
};
// @lc code=end

