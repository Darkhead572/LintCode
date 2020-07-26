/*

requriements

627. Longest Palindrome
Given a string which consists of lowercase or uppercase letters, find the length of the longest palindromes that can be built with those letters.

This is case sensitive, for example "Aa" is not considered a palindrome here.

Example
Example 1:

Input : s = "abccccdd"
Output : 7
Explanation :
One longest palindrome that can be built is "dccaccd", whose length is `7`.
Notice
Assume the length of given string will not exceed 100000.
*/

class Solution {
public:
    /**
     * @param s: a string which consists of lowercase or uppercase letters
     * @return: the length of the longest palindromes that can be built
     */
    int longestPalindrome(string &s) {
        // write your code here
        int res = 0; bool tag = false;
        unordered_map<char, int> hashTable;
        for (size_t i = 0; i < s.length(); ++i)
        {
            if (hashTable.find(s[i]) == hashTable.end())
                hashTable[s[i]] = 1;
            else ++hashTable[s[i]];
        }
        for (auto elem: hashTable)
        {
            cout << elem.first << ' ' << elem.second << endl;
            if (!(elem.second % 2))
                res += elem.second;
            else
            {
                res += elem.second - 1;
                tag = true;
            }
        }
        return res + tag;
    }
};