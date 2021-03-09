/*
297. Find the maximum
Find the maximum of n numbers.

Example
Example 1:

Input：[1, 2, 3, 4, 5]
Output：5
Notice
We promise that all numbers in the list are in the range of int.
*/

/*
297. 寻找最大值
寻找 n 个数中的最大值。

Example
样例 1:

输入：[1, 2, 3, 4, 5]
输出：5
Notice
保证列表里的所有数字都在 int 范围内。
*/

class Solution {
public:
    /**
     * @param nums: the list of numbers
     * @return: return the maximum number.
     */
    int maxNum(vector<int> &nums) {
        // write your code here
        int maximum = INT_MIN;
        for (int i = 0; i < nums.size(); ++i)
            maximum = std::max(nums[i], maximum);
        return maximum;
    }
};