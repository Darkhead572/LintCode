/*

requirements

1886. Moving Target
Given an array nums and an integer target ,
you need to move the element which equal to target to the front of the array, and the order of the remain elements can not be changed.
You must do this moving in-place without making a copy of the array.

Example
Example 1:
Input:
nums = [5, 1, 6, 1]
target=1
Output: [1, 1, 5, 6]
Explanation: 1 is target, so you should keep them in the front of array
Example 2:
Input:
nums = [-1, 2, 3, 5, 2, 2]
target = 2
Output: [2, 2, 2, -1, 3, 5]
Explanation: 2 is target, so you should keep them in front of the array 
Example 3:
Input:
nums = [2, 3, 4, 6]
target = 1
Output: [2, 3, 4, 6]
Explanation: there is not target
Notice
The length of array is within range: [1, 100000]
if not appear target, you needn't do any change in place.

*/

class Solution {
public:
    /**
     * @param nums: a list of integer
     * @param target: an integer
     * @return: nothing
     */
    void MoveTarget(vector<int> &nums, int target) {
        // write your code here
        if (nums.empty())
            return;
        int k = nums.size() - 1;
        vector<int> tmp(nums.size(), target);
        for (int i = k; i >= 0; --i)
            if (nums[i] != target)
                tmp[k--] = nums[i];
        nums.swap(tmp);
    }
};

/*
class Solution {
public:
    void MoveTarget(vector<int> &nums, int target) {
        // write your code here
        if (nums.empty())
            return;
        
        int right = nums.size() - 1;
        int left = right;
        
        for (; right >= 0; right--)
        {
            while (left >= 0 && nums[left] == target)
                --left;
            if (left < 0)
                break;
            nums[right] = nums[left--];
        }
        
        for (int i = 0; i <= right; i++)
        nums[i] = target;
    }
};
*/