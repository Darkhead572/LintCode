/*
100. Remove Duplicates from Sorted Array
中文English
Given a sorted array, 'remove' the duplicates in place such that each element appear only once and return the 'new' length.

Do not allocate extra space for another array, you must do this in place with constant memory.

Example
Example 1:

Input:  []
Output: 0
Example 2:

Input:  [1,1,2]
Output: 2	
Explanation:  uniqued array: [1,2]
*/

class Solution {
public:
    /*
     * @param nums: An ineger array
     * @return: An integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        if(nums.empty())
            return 0;
        int n = nums.size();
        int k = 0;
        for(int i = 1; i < n; ++i)
        if(nums[i] != nums[k])
        nums[++k] = nums[i];
        nums.resize(k + 1);
        return k + 1;
    }
};
