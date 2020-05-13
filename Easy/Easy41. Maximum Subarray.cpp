/*
41. Maximum Subarray
中文English
Given an array of integers, find a contiguous subarray which has the largest sum.

Example
Example1:

Input: [−2,2,−3,4,−1,2,1,−5,3]
Output: 6
Explanation: the contiguous subarray [4,−1,2,1] has the largest sum = 6.
Example2:

Input: [1,2,3,4]
Output: 10
Explanation: the contiguous subarray [1,2,3,4] has the largest sum = 10.
Challenge
Can you do it in time complexity O(n)?

Notice
The subarray should contain at least one number.
*/

class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: An integer indicate the sum of max subarray
     */
    int maxSubArray(vector<int> &nums) {
        // write your code here
        int m = nums.size();
        if(!m) return INT_MIN;
        int currentmax = nums[0];
        int max = nums[0];
        for(int i = 1; i < m; ++i)
        {
            currentmax += nums[i];
            currentmax = currentmax > nums[i]? currentmax: nums[i];
            max = max > currentmax? max: currentmax;
        }
        return max;
    }
};
