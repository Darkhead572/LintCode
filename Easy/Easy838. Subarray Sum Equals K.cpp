/*

requirements

838. Subarray Sum Equals K
Given an array of integers and an integer k, you need to find the total number of continuous subarrays whose sum equals to k.

Example
Example1

Input: nums = [1,1,1] and k = 2
Output: 2
Explanation:
subarray [0,1] and [1,2]
Example2

Input: nums = [2,1,-1,1,2] and k = 3
Output: 4
Explanation:
subarray [0,1], [1,4], [0,3] and [3,4]
*/

class Solution {
public:
    /**
     * @param nums: a list of integer
     * @param k: an integer
     * @return: return an integer, denote the number of continuous subarrays whose sum equals to k
     */
    int subarraySumEqualsK(vector<int> &nums, int k) {
        // write your code here
        unordered_map<int, int> hashMap;
        int result = 0, sum = 0;
        hashMap[0] = 1;
        for (int i = 0; i < nums.size(); ++i)
        {
            sum += nums[i];
            result += hashMap[sum - k];
            ++hashMap[sum]; 
        }
        return result;
    }
};