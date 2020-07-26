/*

requirements

777. Valid Perfect Square
Given a positive integer num, write a function which returns True if num is a perfect square else False.

Example
Example1:

Input: num = 16
Output: True
Explanation:
sqrt(16) = 4
Example2:

Input: num = 15
Output: False
Explanation:
sqrt(15) = 3.87
Notice
Do not use any built-in library function such as sqrt.
*/

class Solution {
public:
    /**
     * @param num: a positive integer
     * @return: if num is a perfect square else False
     */
    bool isPerfectSquare(int num) {
        // write your code here
        long left = 0, right = num;
        while (left <= right)
        {
            long mid = left + (right - left) / 2;
            long t = mid * mid;
            if (t == num)
                return true;
            if (t < num) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }
};