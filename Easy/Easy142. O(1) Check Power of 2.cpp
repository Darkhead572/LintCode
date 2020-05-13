/*

requirements
142. O(1) Check Power of 2
中文English
Using O(1) time to check whether an integer n is a power of 2.

Example
Example 1:
	Input: 4
	Output: true


Example 2:
	Input:  5
	Output: false

Challenge
O(1) time

*/

class Solution {
public:
    /**
     * @param n: An integer
     * @return: True or false
     */
    bool checkPowerOf2(int n) {
        // write your code here
        if(n <= 0) return false;
        return n & (n - 1)? false: true;
    }
};