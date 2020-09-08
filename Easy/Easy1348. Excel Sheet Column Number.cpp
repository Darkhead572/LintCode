/*

requirements

1348. Excel Sheet Column Number
Given a column title as appear in an Excel sheet, return its corresponding column number.

Example
Example1

Input: "AB"
Output: 28
Example2

Input: "AC"
Output: 29
Notice
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28
*/

class Solution {
public:
    /**
     * @param s: a string
     * @return: return a integer
     */
    int titleToNumber(string &s) {
        // write your code here
        int ans = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            ans *= 26;
            ans += s[i] - 'A' + 1;
        }
        return ans;
    }
};