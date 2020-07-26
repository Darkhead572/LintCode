/*

requirements

422. Length of Last Word
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Example
Example 1:

Input: "Hello World"
Output: 5
Example 2:

Input: "Hello LintCode"
Output: 8
Notice
A word is defined as a character sequence consists of non-space characters only.
*/

class Solution {
public:
    /**
     * @param s: A string
     * @return: the length of last word
     */
    int lengthOfLastWord(string &s) {
        // write your code here
        // also can use stringstream
        int length = 0;
        for (int i = s.length()-1; i >= 0; i--)
        {
            if (length == 0)
            {
                if (s[i] == ' ')
                {
                    continue;
                } 
                else 
                {
                    length++;
                }
            } 
            else 
            {
                if (s[i] == ' ') 
                {
                    break;
                }
                else 
                {
                    length++;
                }
            }
        }
        return length;
    }
};