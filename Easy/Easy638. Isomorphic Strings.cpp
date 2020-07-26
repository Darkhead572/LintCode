/*

requirements

638. Isomorphic Strings
Given two strings s and t, determine if they are isomorphic.

Two strings are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

Example
Example 1:

Input : s = "egg", t = "add"
Output : true 
Explanation : 
e -> a, g -> d.
Example 2:

Input : s = "foo", t = "bar"
Output : false
Explanation : 
No solution.
Example 3:

Input : s = "paper", t = "title"
Output : true 
Explanation : 
p -> t, a -> i, e -> l, r -> e.
Notice
You may assume both s and t have the same length.
*/

class Solution {
public:
    /**
     * @param s: a string
     * @param t: a string
     * @return: true if the characters in s can be replaced to get t or false
     */
    bool isIsomorphic(string &s, string &t) {
        // write your code here
        if (s.length() != t.length()) return false;
        set<char> sTypes, tTypes;
        for (int i = 0; i < s.length(); ++i)
        {
            sTypes.insert(s[i]);
            tTypes.insert(t[i]);
        }
        return sTypes.size() == tTypes.size();
    }
};