/*

requirements

916. Palindrome Permutation
Given a string, determine if a permutation of the string could form a palindrome.

Example
Example1

Input: s = "code"
Output: False
Explanation: 
No solution
Example2

Input: s = "aab"
Output: True
Explanation: 
"aab" --> "aba"
Example3

Input: s = "carerac"
Output: True
Explanation: 
"carerac" --> "carerac"
*/

class Solution {
public:
    /**
     * @param s: the given string
     * @return: if a permutation of the string could form a palindrome
     */
    bool canPermutePalindrome(string &s) {
        // write your code here
        unordered_map<char, size_t> hashMap;
        for (size_t i = 0; i < s.length(); ++i)
        {
            if (hashMap.count(s[i]))
                ++hashMap[s[i]];
            else hashMap[s[i]] = 1;
        }
        size_t cntOdds = 0;
        for (auto&& elem: hashMap)
        {
            if (elem.second & 1)
                ++cntOdds;
        }
        return cntOdds == 0 || cntOdds == 1;
    }
};