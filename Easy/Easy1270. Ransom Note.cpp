/*

requirements

1270. Ransom Note
Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Example
Example 1

Input : ransomNote = "aa", magazine = "aab"
Output : true
Explanation : the ransom note can be constructed from the magazines.
Example 2

Input : ransomNote = "aaa", magazine = "aab"
Output : false
Explanation : the ransom note can't be constructed from the magazines.
Notice
You may assume that both strings contain only lowercase letters.
*/

class Solution {
public:
    /**
     * @param ransomNote: a string
     * @param magazine: a string
     * @return: whether the ransom note can be constructed from the magazines
     */
    bool canConstruct(string &ransomNote, string &magazine) {
        // Write your code here
        int hashMap[26] = { 0 };
        for (size_t i = 0; i < ransomNote.length(); ++i)
            --hashMap[ransomNote[i] - 97];
        for (size_t i = 0; i < magazine.length(); ++i)
            ++hashMap[magazine[i] - 97];
        for (size_t i = 0; i < 26; ++i)
            if (hashMap[i] < 0)
                return false;
        return true;
    }
};