/*

requirements

1319. Contains Duplicate II
Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k.

Example
Example 1：

Input：nums = [1,2,1], k = 0
Output：False
Example 2：

Input：nums = [1,2,1], k = 2
Output：True
Explanation：nums[0] = nums[2] and 2 - 0 <= 2
*/

class Solution {
public:
    /**
     * @param nums: the given array
     * @param k: the given number
     * @return:  whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k
     */
    bool containsNearbyDuplicate(vector<int> &nums, int k) {
        // Write your code here
        if (k <= 0) return false;
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(map.count(nums[i]) && i - map[nums[i]] <= k) 
                return true;
            map[nums[i]] = i;
        }
        return false;
    }
};