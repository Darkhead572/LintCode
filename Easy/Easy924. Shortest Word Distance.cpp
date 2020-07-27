/*

requirements

924. Shortest Word Distance
Given a list of words and two words word1 and word2, return the shortest distance between these two words in the list.

Example
Example 1:

Input：["practice", "makes", "perfect", "coding", "makes"],"coding","practice"
Output：3
Explanation：index("coding") - index("practice") = 3
Example 2:

Input：["practice", "makes", "perfect", "coding", "makes"],"makes","coding"
Output：1
Explanation：index("makes") - index("coding") = 1
Notice
You may assume that word1 does not equal to word2, and word1 and word2 are both in the list.
*/

class Solution {
public:
    /**
     * @param words: a list of words
     * @param word1: a string
     * @param word2: a string
     * @return: the shortest distance between word1 and word2 in the list
     */
    int shortestDistance(vector<string> &words, string &word1, string &word2){
        // Write your code here
        int minDis = INT_MAX;
        int index1 = -1; int index2 = -1;
        bool tag = false;
        for (int i = 0; i < words.size(); ++i)
        {
            tag = false;
            if (words[i] == word1)
                index1 = i, tag = true;
            if (words[i] == word2)
                index2 = i, tag = true;
            if (tag && index1 != -1 && index2 != -1)
                minDis = min(minDis, int(abs(index1 - index2)));
        }
        return minDis;
    }
};