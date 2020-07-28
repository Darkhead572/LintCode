/*

requirements

1212. Max Consecutive Ones
Given a binary array, find the maximum number of consecutive 1s in this array.

Example
Example 1:

Input: [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
    The maximum number of consecutive 1s is 3.
Example 2:

Input: [1]
Output: 1
Notice
The input array will only contain 0 and 1.
The length of input array is a positive integer and will not exceed 10,000
*/

class Solution {
public:
    /**
     * @param nums: a binary array
     * @return:  the maximum number of consecutive 1s
     */
    int findMaxConsecutiveOnes(vector<int> &nums) {
        // Write your code here
        int maximum = 0;
        int cnt = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i]) ++cnt, maximum = max(maximum, cnt);
            else cnt = 0;
        }
        return maximum;
    }
};