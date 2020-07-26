/*

requirements

539. Move Zeroes
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example
Example 1:

Input: nums = [0, 1, 0, 3, 12],
Output: [1, 3, 12, 0, 0].
Example 2:

Input: nums = [0, 0, 0, 3, 1],
Output: [3, 1, 0, 0, 0].
Notice
You must do this in-place without making a copy of the array.
Minimize the total number of operations.
*/

class Solution {
public:
    /**
     * @param nums: an integer array
     * @return: nothing
     */
    void moveZeroes(vector<int> &nums) {
        // write your code here
        int i = 0, m = nums.size();
        while (i < m)
        {
            if (!nums[i])
            {
                --m;
                for (int j = i; j < m; ++j)
                {
                    swap(nums[j], nums[j + 1]);
                }
            }
            else ++i;
        }
    }
};