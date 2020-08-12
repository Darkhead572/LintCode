/*

requirements

1256. Nth Digit
Find the nth digit of the infinite integer sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ...

Example
Example 1:

Input：3
Output：3
Example 2:

Input：11
Output：0
Explanation：The 11th digit of the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... is a 0, which is part of the number 10.
Notice
n is positive and will fit within the range of a 32-bit signed integer (n < 2^31).
*/

class Solution {
public:
    /**
     * @param n: a positive integer
     * @return: the nth digit of the infinite integer sequence
     */
    int findNthDigit(int n) {
        // write your code here
        long long bits = 1;
        long long cnt = 9, start = 1;
        while (n > bits * cnt)
        {
            n -= bits * cnt;
            ++bits;
            cnt *= 10;
            start *= 10;
        }
        start += (n - 1) / bits;
        string t = to_string(start);
        return t[(n - 1) % bits] - 48;
    }
};