/*

requirements

311. Pioneering palindrome
Given a string, determine whether this string can be turned into a palindrome by exchanging certain characters

Example
Example 1:

Input: s = “abc"
Output:
false
Example 2:

Input: s = “aab"
Output:
true
Notice
1<=s.size()<=10000001<=s.size()<=1000000
String contains only uppercase and lowercase characters
*/

class Solution {
public:
    /**
     * @param s: A string containing only uppercase and lowercase letters
     * @return: Judge whether it can become a palindrome
     */
    bool isPalindrome(string &s) {
        // write your code here
        unordered_map<char, size_t> hashMap;
        for (unsigned i = 0; i < s.length(); ++i)
        {
            if (!hashMap.count(s[i]))
                hashMap[s[i]] = 1;
            else ++hashMap[s[i]];
        }
        size_t cntOdds = 0;
        for (auto&& elem: hashMap)
            if (elem.second & 1)
                ++cntOdds;
        return cntOdds == 0 || cntOdds == 1;
    }
};