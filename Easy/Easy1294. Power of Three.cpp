/*

requirements

1294. Power of Three
Given an integer, write a function to determine if it is a power of three.

Example
Example1

Input: n = 0
Output: False
Example2

Input: n = 9
Output: True
Challenge
Could you do it without using any loop / recursion?
*/
class Solution {
public:
    /**
     * @param n: an integer
     * @return: if n is a power of three
     */
    bool isPowerOfThree(int n) {
        // Write your code here
        if (n <= 0) return false;
        int maxPower = int(pow(3, int(log(0x7fffffff) / log(3))));
        return maxPower % n == 0;
    }
};