/*

requirements

1046. Prime Number of Set Bits in Binary Representation
Given two integers L and R, find the count of numbers in the range [L, R] (inclusive) having a prime number of set bits in their binary representation.

(Recall that the number of set bits an integer has is the number of 1s present when written in binary. For example, 21 written in binary is 10101 which has 3 set bits. Also, 1 is not a prime.)

Example
Example 1:

Input: L = 6, R = 10
Output: 4
Explanation:
6 -> 110 (2 set bits, 2 is prime)
7 -> 111 (3 set bits, 3 is prime)
9 -> 1001 (2 set bits , 2 is prime)
10->1010 (2 set bits , 2 is prime)
Example 2:

Input: L = 10, R = 15
Output: 5
Explanation:
10 -> 1010 (2 set bits, 2 is prime)
11 -> 1011 (3 set bits, 3 is prime)
12 -> 1100 (2 set bits, 2 is prime)
13 -> 1101 (3 set bits, 3 is prime)
14 -> 1110 (3 set bits, 3 is prime)
15 -> 1111 (4 set bits, 4 is not prime)
Notice
1.L, R will be integers L <= R in the range [1, 10^6].
2.R - L will be at most 10000.
*/

class Solution {
public:
    /**
     * @param L: an integer
     * @param R: an integer
     * @return: the count of numbers in the range [L, R] having a prime number of set bits in their binary representation
     */
    int countPrimeSetBits(int L, int R) {
        // Write your code here
        int res = 0;
        set<int> primesTable = { 2, 3, 5, 7, 11, 13, 17, 19 };
        for (int i = L; i <= R; ++i)
        {
            // __builtin_popcount() is used to calculate the number of bits which is 1 for 32bit integers
            int cnt = __builtin_popcount(i);
            res += primesTable.count(cnt);
        }
        return res;
    }
};