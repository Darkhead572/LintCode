/*

requirements

845. Greatest Common Divisor
Given two numbers, number a and number b. Find the greatest common divisor of the given two numbers.

Example
Example1

Input: a = 10, b = 15
Output: 5
Explanation:
10 % 5 == 0
15 % 5 == 0
Example2

Input: a = 15, b = 30
Output: 15
Explanation:
15 % 15 == 0
30 % 15 == 0
Notice
In mathematics, the greatest common divisor (gcd) of two or more integers, which are not all zero, is the largest positive integer that divides each of the integers.
*/

class Solution {
public:
    /**
     * @param a: the given number
     * @param b: another number
     * @return: the greatest common divisor of two numbers
     */
    int gcd(int a, int b) {
        // write your code here
        int small = min(a, b);
        int big = max(a, b);
        if (small != 0)
            return gcd(small, big % small);
        else return big;
    }
};