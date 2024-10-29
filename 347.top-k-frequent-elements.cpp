/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequencyMap;
        for (int num : nums)
        {
            frequencyMap[num]++;
        }

        priority_queue<pair<int, int>> maxHeap;
        for (const auto& entry : frequencyMap)
        {
            maxHeap.push({entry.second, entry.first});
        }

        vector<int> result(k);
        for (int i = 0; i < k; i++)
        {
            result[i] = maxHeap.top().second;
            maxHeap.pop();
        }

        return result;
    }
};
// @lc code=end

