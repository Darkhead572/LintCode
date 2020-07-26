/*

requirements

1314. Power of Two
Given an integer, write a function to determine if it is a power of two.

Example
Example

Input: n = 3
Output: false
*/
class Solution {
public:
    /**
     * @param n: an integer
     * @return: if n is a power of two
     */
    bool isPowerOfTwo(int n) {
        // Write your code here
        unsigned cnt = 0;
        while (n)
        {
            ++cnt;
            n = n & (n - 1);
        }
        return cnt == 1;
    }
};