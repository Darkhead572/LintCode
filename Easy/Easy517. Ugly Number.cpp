/*

requirements

517. Ugly Number
Write a program to check whether a given number is an ugly number`.

Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.

Example
Example 1:

Input: num = 8 
Output: true
Explanation:
8=2*2*2
Example 2:

Input: num = 14 
Output: false
Explanation:
14=2*7 
Notice
Note that 1 is typically treated as an ugly number.
*/

class Solution {
public:
    /**
     * @param num: An integer
     * @return: true if num is an ugly number or false
     */
    bool isUgly(int num) {
        // write your code here
        if (num == 1) return true;
        if (num == 0) return false;
        bool tag1 = true, tag2 = true, tag3 = true;
        while (tag1 || tag2 || tag3)
        {
            if (!(num % 2)) num /= 2;
            else tag1 = false;
            if (!(num % 3)) num /= 3;
            else tag2 = false;
            if (!(num % 5)) num /= 5;
            else tag3 = false;
        }
        return num == 1;
    }
};