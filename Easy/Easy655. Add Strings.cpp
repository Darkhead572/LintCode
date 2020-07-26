/*

requirements

655. Add Strings
Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.

Example
Example 1:

Input : num1 = "123", num2 = "45"
Output : "168"
Notice
The length of both num1 and num2 is < 5100.
Both num1 and num2 contains only digits 0-9.
Both num1 and num2 does not contain any leading zero.
You must not use any built-in BigInteger library or convert the inputs to integer directly.
*/

class Solution {
public:
    /**
     * @param num1: a non-negative integers
     * @param num2: a non-negative integers
     * @return: return sum of num1 and num2
     */
    string addStrings(string &num1, string &num2) {
        // write your code here
        string res;
        int m = num1.length();
        int n = num2.length();
        bool c = false;
        for (int i = 0; i < max(m, n); ++i)
        {
            int oprand1 = 0, oprand2 = 0, sum = 0;
            if (i < m) oprand1 = num1[m - i - 1] - 48;
            if (i < n) oprand2 = num2[n - i - 1] - 48;
            sum = oprand1 + oprand2 + c;
            res = char(sum % 10 + 48) + res;
            c = sum / 10;
        }
        if (c) res = '1' + res;
        return res;
    }
};