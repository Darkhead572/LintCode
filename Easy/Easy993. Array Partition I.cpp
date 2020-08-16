/*

requirements

993. Array Partition I
Given an array of 2n integers, your task is to group these integers into n pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of min(ai, bi) for all i from 1 to n as large as possible.

Example
Example 1:

Input: [1,4,3,2]
Output: 4
Explanation: n is 2, and the maximum sum of pairs is 4 = min(1, 2) + min(3, 4).
Example 2:

Input: [5,6]
Output: 5
Explanation: n is 1, and the maximum sum of pairs is 5 = min(5, 6) .
Notice
1.n is a positive integer, which is in the range of [1, 10000].
2.All the integers in the array will be in the range of [-10000, 10000].
*/

class Solution {
public:
    /**
     * @param nums: an array
     * @return: the sum of min(ai, bi) for all i from 1 to n
     */
    int arrayPairSum(vector<int> &nums) {
        // Write your code here
        sort(nums.begin(), nums.end());
        int res = 0;
        for (int i = 0; i < nums.size(); i += 2)
            res += nums[i];
        return res;
    }
};