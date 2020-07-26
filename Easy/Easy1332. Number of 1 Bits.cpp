/*

requirements

1332. Number of 1 Bits
Write a function that takes an unsigned integer and returns the number of ’1' bits the corresponding binary number has (also known as the Hamming weight).

Example
Example 1

Input：n = 11
Output：3
Explanation：11(10) = 1011(2), so return 3
Example 2

Input：n = 7
Output：3
Explanation：7(10) = 111(2), so return 3
*/

class Solution {
public:
    /**
     * @param n: an unsigned integer
     * @return: the number of â€™1' bits
     */
    int hammingWeight(unsigned int n) {
        // write your code here
        size_t cnt = 0;
        while (n)
        {
            ++cnt;
            n &= (n - 1);
        }
        return cnt;
    }
};