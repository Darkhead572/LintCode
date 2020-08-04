/*

requirements

1350. Excel Sheet Column Title
Given a positive integer, return its corresponding column title as appear in an Excel sheet.

Example
Example1

Input: 28
Output: "AB"
Example2

Input: 29
Output: "AC"
Notice
1 -> A
2 -> B
3 -> C
 ...
26 -> Z
27 -> AA
28 -> AB 
*/

class Solution {
public:
    /**
     * @param n: a integer
     * @return: return a string
     */
    string convertToTitle(int n) {
        // write your code here
        string res;
        while(--n >= 0)
        {
            res = char('A' + n % 26) + res;
            n /= 26;            
        }
        return res;
    }
};