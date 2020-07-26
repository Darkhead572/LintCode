/*

requirements

457. Classical Binary Search
Find any position of a target number in a sorted array. Return -1 if target does not exist.

Example
Example 1:

Input: nums = [1,2,2,4,5,5], target = 2
Output: 1 or 2
Example 2:

Input: nums = [1,2,2,4,5,5], target = 6
Output: -1
Challenge
O(logn) time
*/

class Solution {
public:
    /**
     * @param nums: An integer array sorted in ascending order
     * @param target: An integer
     * @return: An integer
     */
    int findPosition(vector<int> &nums, int target) {
        // write your code here
        // 1. check valid input
        if (nums.size() == 0) 
        {
            return -1;
        }
        
        // 2. define left anf right positon for the array
        int left = 0;
        int right = nums.size() - 1;
        
        // 3. start binary search
        while (left + 1 < right) 
        {
            int mid = (right - left) / 2 + left;
            if (nums[mid] == target) 
            {
                return mid;
            }
            if (nums[mid] < target) 
            {
                left = mid;
            }
            if (nums[mid] > target) 
            {
                right = mid;
            }
        }
        
        // 4. there is one left and one right left
        if (nums[left] == target)
        {
            return left;
        }
        if (nums[right] == target) 
        {
            return right;
        }
        
        // 5. return -1
        return -1;
    }
};