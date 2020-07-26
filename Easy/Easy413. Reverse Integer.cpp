/*

requirements

413. Reverse Integer
Reverse digits of an integer. Returns 0 when the reversed integer overflows (signed 32-bit integer).

Example
Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
*/

class Solution {
public:
    /**
     * @param n: the integer to be reversed
     * @return: the reversed integer
     */
     
    long stol(string str)
    {
        long result;
        istringstream is(str);
        is >> result;
        return result;
    }
    int reverseInteger(int n) {
        // write your code here
        string tmp = to_string(n);
        if(tmp[0] == '-')
            reverse(tmp.begin() + 1, tmp.end());
        else
            reverse(tmp.begin(), tmp.end());
        long res = stol(tmp);
        if(res > INT_MAX || res < INT_MIN)
            return 0;
        else
            return (int)res;
    }
};