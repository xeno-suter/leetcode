
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

/*
 * @lc app=leetcode id=884 lang=java
 *
 * [884] Uncommon Words from Two Sentences
 */

// @lc code=start
class Solution {
    public String[] uncommonFromSentences(String s1, String s2) {
        Map<String, Integer> wordCount = new HashMap<>();

        String[] words1 = s1.split(" ");
        String[] words2 = s2.split(" ");
        
        for (String word : words1) {
            wordCount.put(word, wordCount.getOrDefault(word, 0) + 1);
        }
        
        for (String word : words2) {
            wordCount.put(word, wordCount.getOrDefault(word, 0) + 1);
        }

        List<String> uncommon = new LinkedList();
        for (String word : wordCount.keySet()) {
            if (wordCount.get(word) == 1) {
                uncommon.add(word);
            }
        }

        return uncommon.toArray(new String[uncommon.size()]);
    }
}
// @lc code=end

