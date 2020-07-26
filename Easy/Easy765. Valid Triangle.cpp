/*

requirements

765. Valid Triangle
Given three integers a, b, c, return true if they can form a triangle.

Example
Example 1:

Input : a = 2, b = 3, c = 4
Output : true
Example 2:

Input : a = 1, b = 2, c = 3
Output : false
Notice
What is Triangle? (Wikipedia)
*/

class Solution {
public:
    /**
     * @param a: a integer represent the length of one edge
     * @param b: a integer represent the length of one edge
     * @param c: a integer represent the length of one edge
     * @return: whether three edges can form a triangle
     */
    bool isValidTriangle(int a, int b, int c) {
        // write your code here
        if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
            return true;
        else return false;
    }
};