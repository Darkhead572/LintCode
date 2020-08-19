/*

requirements

1334. Rotate Array
Given an array, rotate the array to the right by k steps, where k is non-negative.

Example
Example 1:

Input: [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
Challenge
1.Try to come up as many solutions as you can, there are at least 3 different ways to solve this problem.
2.Could you do it in-place with O(1) extra space?
*/

class Solution {
public:
    /**
     * @param nums: an array
     * @param k: an integer
     * @return: rotate the array to the right by k steps
     */
    vector<int> rotate(vector<int> &nums, int k) {
        // Write your code here
        int m = nums.size();
        vector<int> res(m, 0);
        for (int i = 0; i < m; ++i)
            res[(i + k) % m] = nums[i];
        return res;
    }
	// the other solution
	vector<int> rotate(vector<int> &nums, int k) {
        // Write your code here
        if(k == 0 ||nums.size() < 2) return nums;
        
        k = k%nums.size();
        reverse(nums.begin(), nums.begin() + nums.size() - k);
        reverse(nums.begin() + nums.size() - k, nums.end());
        reverse(nums.begin(), nums.end());
        return nums;
    }
};