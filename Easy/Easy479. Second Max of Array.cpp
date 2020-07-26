/*

requirements

479. Second Max of Array
Find the second max number in a given array.

Example
Example1:

Input: [1,3,2,4]
Output: 3
Example2:

Input: [1,1,2,2]
Output: 2
Notice
You can assume the array contains at least two numbers.
The second max number is the second number in a descending array.
*/

class Solution {
public:
    /**
     * @param nums: An integer array
     * @return: The second max number in the array.
     */
    int secondMax(vector<int> &nums) {
        // write your code here
        int m = nums.size();
        if (m < 2) return INT_MIN;
        int secondMax = min(nums[0], nums[1]);
        int Max = max(nums[0], nums[1]);
        for (int i = 2; i < m; ++i)
        {
            if (Max <= nums[i])
            {
                secondMax = Max;
                Max = nums[i];
            }
        }
        return secondMax;
    }
};