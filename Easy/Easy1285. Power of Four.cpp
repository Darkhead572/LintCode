/*

requirements

1285. Power of Four
Given an integer (signed 32 bits), write a function to check whether it is a power of 4.

Example
Example1:

Input：num = 16
Output：True
Example2:

Input：num = 5 
Output：False
Challenge
Could you solve it without loops/recursion?
*/
class Solution {
public:
    /**
     * @param num: an integer
     * @return: whether the integer is a power of 4
     */
    bool isPowerOfFour(int num) {
        // Write your code here
        if (num <= 0) return false;
        if ((num & (num - 1)) == 0 && (num & 0x55555555) == num)
            return true;
        else return false;
    }
};