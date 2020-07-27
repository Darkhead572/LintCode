/*

requirements

977. Base 7
Given an integer, return its base 7 string representation.

Example
Example 1:

input: num = 100
outut: 202
Example 2:

input: num = -7
outut: -10
Notice
The input will be in range of [-1e7, 1e7].
*/

class Solution {
public:
    /**
     * @param num: the given number
     * @return: The base 7 string representation
     */
    string convertToBase7(int num) {
        // Write your code here
        if (num == 0) return "0";
        string res, symbol;
        if (num < 0)
        {
            symbol = "-";
            num *= -1;
        }
        stack<char> s;
        while (num)
        {
            int tmp = num % 7;
            s.push(tmp + 48);
            num /= 7;
        }
        for (; !s.empty(); s.pop())
        {
            res += s.top();
        }
        return symbol + res;
    }
};