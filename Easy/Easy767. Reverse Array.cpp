/*

requirements

767. Reverse Array
Reverse the given array nums inplace.

Example
Example 1:

Input : nums = [1,2,5]
Output : [5,2,1]
Notice
Inplace means you can't use extra space.
*/

class Solution {
public:
    /**
     * @param nums: a integer array
     * @return: nothing
     */
    void reverseArray(vector<int> &nums) {
        // write your code here
        int m = nums.size();
        for (int i = 0; i < m / 2; ++i)
        {
            swap(nums[i], nums[m - i - 1]);
        }
    }
};