/*

requirements

837. Palindromic Substrings
Given a string, your task is to count how many palindromic substrings in this string.
The substrings with different start indexes or end indexes are counted as different substrings even they consist of same characters.

Example
Example1

Input: "abc"
Output: 3
Explanation:
3 palindromic strings: "a", "b", "c".
Example2

Input: "aba"
Output: 4
Explanation:
4 palindromic strings: "a", "b", "a", "aba".
Notice
The input string length won't exceed 1000
*/

class Solution {
public:
    /**
     * @param str: s string
     * @return: return an integer, denote the number of the palindromic substrings
     */
    bool isPalindromic(string tmp)
    {
        size_t m = tmp.length();
        for (size_t i = 0; i < m / 2; ++i)
        {
            if (tmp[i] != tmp[m - i - 1])
                return false;
            else continue;
        }
        return true;
    }
    int countPalindromicSubstrings(string &str) {
        // write your code here
        int result = 0;
        for (size_t subLength = 1; subLength <= str.length(); ++subLength)
        {
            for (size_t index = 0; index + subLength <= str.length(); ++index)
            {
                if (isPalindromic(str.substr(index, subLength)))
                    ++result;
            }
        }
        return result;
    }
};