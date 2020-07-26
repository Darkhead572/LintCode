/*

requirements

773. Vlid Anagram
Given two strings s and t, write a function to determine if t is an anagram of s.

Example
Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
Challenge
What if the inputs contain unicode characters? How would you adapt your solution to such case?

Notice
You may assume the string contains only lowercase alphabets.
*/

class Solution {
public:
    /**
     * @param s: string s
     * @param t: string t
     * @return: Given two strings s and t, write a function to determine if t is an anagram of s.
     */
    bool isAnagram(string &s, string &t) {
        // write your code here
        if (s.length() != t.length()) return false;
        unordered_map<char, int> hashMap;
        for (size_t i = 0; i < s.length(); ++i)
        {
            if (hashMap.find(s[i]) == hashMap.end())
                hashMap[s[i]] = 1;
            else ++hashMap[s[i]];
            if (hashMap.find(t[i]) == hashMap.end())
                hashMap[t[i]] = -1;
            else --hashMap[t[i]];
        }
        for (auto elem: hashMap)
            if (elem.second) return false;
        return true;
    }
};