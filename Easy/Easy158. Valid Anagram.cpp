/*

requirements
158. Valid Anagram
Write a method anagram(s,t) to decide if two strings are anagrams or not.
样例
Example 1:

Input: s = "ab", t = "ab"
Output: true
Example 2:

Input:  s = "abcd", t = "dcba"
Output: true
Example 3:

Input:  s = "ac", t = "ab"
Output: false

challenge
O(n) time, O(1) extra space

What is Anagram?
Two strings are anagram if they can be the same after change the order of characters.
*/

class Solution {
public:
    /**
     * @param s: The first string
     * @param t: The second string
     * @return: true or false
     */
    bool anagram(string &s, string &t) {
        // write your code here
        //the number of ASCII characters is 256
        int characters[256] = {0};
        int m = s.length();
        int n = t.length();
        if(m != n)
            return false;
        for(int i = 0; i < m; ++i)
        {
            ++characters[s[i]];
            --characters[t[i]];
        }
        for(int i = 0; i < 256; ++i)
        {
            //if characters[i] is not zero, then return false
            if(characters[i])
                return false;
        }
        return true;
    }
};