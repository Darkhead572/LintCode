/*
44. Minimum Subarray
中文English
Given an array of integers, find the continuous subarray with smallest sum.

Return the sum of the subarray.

Example
Example 1

Input：[1, -1, -2, 1]
Output：-3
Example 2

Input：[1, -1, -2, 1, -4]
Output：-6
Notice
The subarray should contain one integer at least.
*/

class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: A integer indicate the sum of minimum subarray
     */
    int minSubArray(vector<int> &nums) {
        // write your code here
        int m = nums.size();
        if(m <= 0) return INT_MIN;
        int currentmin = nums[0];
        int min = nums[0];
        for(int i = 1; i < m; ++i)
        {
            currentmin += nums[i];
            currentmin = currentmin < nums[i]? currentmin: nums[i];
            min = min < currentmin? min: currentmin;
        }
        return min;
    }
};
