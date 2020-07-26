/*

requirements

408. Add Binary
Given two binary strings, return their sum (also a binary string).

Example
Example 1:

Input:
a = "0", b = "0"
Output:
"0"
Example 2:

Input:
a = "11", b = "1"
Output:
"100"
*/

class Solution {
public:
    /**
     * @param a: a number
     * @param b: a number
     * @return: the result
     */
    string addBinary(string &a, string &b) {
        // write your code here
        string res; bool c = false; int sum = 0;
        int m = a.length();
        int n = b.length();
        for (int i = 0; i < max(m, n); ++i)
        {
            int op1 = 0, op2 = 0;
            if(m >= i + 1)
                op1 = a[m - i - 1] - 48;
            if(n >= i + 1)
                op2 = b[n - i - 1] - 48;
            sum = op1 + op2 + c;
            c = sum / 2;
            res = char(sum % 2 + 48) + res;
            sum = 0;
        }
        if (c) res = '1' + res;
        return res;
    }
};