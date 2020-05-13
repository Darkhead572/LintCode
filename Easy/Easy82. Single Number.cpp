/*
82. Single Number
中文English
Given 2 * n + 1 numbers, every numbers occurs twice except one, find it.

Example
Example 1:

Input：[1,1,2,2,3,4,4]
Output：3
Explanation:
Only 3 appears once
Example 2:

Input：[0,0,1]
Output：1
Explanation:
Only 1 appears once
Challenge
One-pass, constant extra space.

Notice
n≤100
*/

//challenge
class Solution {
public:
    /**
     * @param A: An integer array
     * @return: An integer
     */
    int singleNumber(vector<int> &A) {
        // write your code here
        //use bit operation
        //the same numbers XOR with each other must be zero
        int m = A.size();
        if(!m) return INT_MIN;
        int result = A[0];
        for(int i = 1; i < m; ++i)
        result = result^A[i];
        return result;
    }
};
