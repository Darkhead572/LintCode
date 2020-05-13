/*
14. First Position of Target
中文English
For a given sorted array (ascending order) and a target number, find the first index of this number in O(log n) time complexity.

If the target number does not exist in the array, return -1.

Example
Example 1:
	Input:  [1,4,4,5,7,7,8,9,9,10]，1
	Output: 0
	
	Explanation: 
	the first index of  1 is 0.

Example 2:
	Input: [1, 2, 3, 3, 4, 5, 10]，3
	Output: 2
	
	Explanation: 
	the first index of 3 is 2.

Example 3:
	Input: [1, 2, 3, 3, 4, 5, 10]，6
	Output: -1
	
	Explanation: 
	Not exist 6 in array.

Challenge
If the count of numbers is bigger than 2^32, can your code work properly?
*/

class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target to find.
     * @return: The first position of target. Position starts from 0.
     */
    int binarySearch(vector<int> &nums, int target) {
        // write your code here
        int left = 0;
        int right = nums.size() - 1;
        int size = right + 1;
        //size is 0, return -1
        if (!size) return -1;
        int mid = (left + right) / 2;
        while (true)
        {
            if (nums[mid] == target) break;
            if (left == mid || right == mid) return -1;
            if (nums[mid] < target)
            {
                left = mid + 1;
                mid = (left + right) / 2;
                //over the boundary, show that the target is not founded
                if (left == size) return -1;
            }
            else
            {
                right = mid - 1;
                mid = (left + right) / 2;
                if (right < 0) return -1;
            }
        }
        while (mid - 1 >= 0 && nums[mid - 1] == nums[mid]) --mid;
        return mid;
    }
};
