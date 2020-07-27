/*

requirements

835. Hamming Distance
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
Given two integers x and y, calculate the Hamming distance.

Example
Example1

Input: x = 1 and y = 4
Output: 2
Explanation:
The binary representation of 1 is 001
The binary representation of 4 is 100
There are 2 different bits
Example2

Input: x = 5 and y = 2
Output: 3
Explanation:
The binary representation of 5 is 101
The binary representation of 2 is 010
There are 3 different bits
Notice
0 ≤ x, y < 231


*/

class Solution {
public:
    /**
     * @param x: an integer
     * @param y: an integer
     * @return: return an integer, denote the Hamming Distance between two integers
     */
    int hammingDistance(int x, int y) {
        // write your code here
        int diff = x ^ y;
        size_t cnt = 0;
        while (diff)
        {
            ++cnt;
            diff &= diff - 1;
        }
        return cnt;
    }
};