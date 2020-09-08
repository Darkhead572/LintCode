/*

requirements

1347. Factorial Trailing Zeroes
Given an integer n, return the number of trailing zeroes in n!.

Example
Example1

Input: n = 5
Output: 1
Explanation:
1*2*3*4*5=120
Example2

Input: n = 10
Output: 2
Explanation:
1*2*3*4*5*6*7*8*9*10=3628800
Notice
Your solution should be in logarithmic time complexity.
*/

class Solution {
public:
    /**
     * @param n: a integer
     * @return: return a integer
     */
    int trailingZeroes(int n) {
        // write your code here
        int res = 0;
        while (n >= 5)
        {
            res += n / 5;
            n /= 5;
        }
        return res;
    }
};