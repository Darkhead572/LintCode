/*

requirements

646. First Position Unique Character
Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Example
Example 1:

Input : s = "lintcode"
Output : 0
Example 2:

Input : s = "lovelintcode"
Output : 2
*/

class Solution {
public:
    /**
     * @param s: a string
     * @return: it's index
     */
    int firstUniqChar(string &s) {
        // write your code here
        int res = INT_MAX;
        unordered_map<char, pair<size_t, int>> hashTable;
        for (size_t i = 0; i < s.length(); ++i)
        {
            if (hashTable.find(s[i]) == hashTable.end())
                hashTable[s[i]] = make_pair(1, i);
            else
                ++hashTable[s[i]].first;
        }
        for (auto elem: hashTable)
        {
            if (elem.second.first == 1)
                res = min(res, elem.second.second);
        }
        if (res == INT_MAX) return -1;
        else return res;
    }
};