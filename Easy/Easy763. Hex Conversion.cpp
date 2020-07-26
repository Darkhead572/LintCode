/*

requirements

763. Hex Conversion
Given a decimal number n and an integer k, Convert decimal number n to base-k.

Example
Example 1:

Input : n = 5, k = 2
Output : 101
Example 2:

Input : n = 30, k = 16
Output : "1E"
Notice
0<=n<=2^31-1, 2<=k<=16
Each letter over 9 is indicated in uppercase
*/

class Solution {
public:
    /**
     * @param n: a decimal number
     * @param k: a Integer represent base-k
     * @return: a base-k number
     */
    string hexConversion(int n, int k) {
        // write your code here
        if (n == 0) return "0";
        string res;
        stack<char> s;
        while (n)
        {
            int tmp = n % k;
            if (tmp < 10) s.push(tmp + 48);
            else s.push(tmp + 55);
            n /= k;
        }
        for (; !s.empty(); s.pop())
        {
            res += s.top();
        }
        return res;
    }
};