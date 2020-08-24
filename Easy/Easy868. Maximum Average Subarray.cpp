/*

requirements

868. Maximum Average Subarray
Given an array consisting of n integers, find the contiguous subarray of given length k that has the maximum average value. You need to output the maximum average value.

Example
Example1

Input:  nums = [1,12,-5,-6,50,3] and k = 4
Output: 12.75
Explanation:
Maximum average is (12-5-6+50)/4 = 51/4 = 12.75
Example2

Input:  nums = [4,2,1,3,3] and k = 2
Output: 3.00
Explanation:
Maximum average is (3+3)/2 = 6/2 = 3.00
Notice
1 <= k <= n <= 30,000.
Elements of the given array will be in the range [-10,000, 10,000].
*/

class Solution {
public:
    /**
     * @param nums: an array
     * @param k: an integer
     * @return: the maximum average value
     */
    double findMaxAverage(vector<int>& nums, int k) {
        // Write your code here
        int n = nums.size();
        vector<int> sum(n + 1, 0);
        for (int i = 1; i <= n; ++i)
            sum[i] = sum[i - 1] + nums[i - 1];
        int res = INT_MIN;
        for (int i = k; i <= n; ++i)
            res = max(res, sum[i] - sum[i - k]);
        return res * 1.0 / k;
    }
};