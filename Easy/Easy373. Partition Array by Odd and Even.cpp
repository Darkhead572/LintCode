/*

requirements

373. Partition Array by Odd and Even
Partition an integers array into odd number first and even number second.

Example
Example 1:

Input: [1,2,3,4]
Output: [1,3,2,4]
Example 2:

Input: [1,4,2,3,5,6]
Output: [1,3,5,4,2,6]
Challenge
Do it in-place.

Notice
The answer is not unique. All you have to do is give a vaild answer.
*/

class Solution {
public:
    /*
     * @param nums: an array of integers
     * @return: nothing
     */
    void partitionArray(vector<int> &nums) {
        // write your code here
        int start = 0, end = nums.size() - 1;
        while (start < end)
        {
            while (start < end && nums[start] % 2 == 1)
                ++start;
            while (start < end && nums[end] % 2 == 0)
                --end;
            if (start < end)
                swap(nums[start++], nums[end--]);
        }
        int i = 0;
        for (; i < nums.size(); ++i) 
            if (nums[i] % 2 == 0) break;
        if (i > 0)
            swap(nums[0], nums[i-1]);
    }
};