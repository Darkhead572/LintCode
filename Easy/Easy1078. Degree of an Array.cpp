/*

requirements

1078. Degree of an Array
Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.

Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums.

Example
Example 1:

Input: [2, 2]
Output: 2
Example 2:

Input: [1, 2, 2, 3, 1]
Output: 2
Explanation: 
The input array has a degree of 2 because both elements 1 and 2 appear twice.
Of the subarrays that have the same degree:
[1, 2, 2, 3, 1], [1, 2, 2, 3], [2, 2, 3, 1], [1, 2, 2], [2, 2, 3], [2, 2]
The shortest length is 2. So return 2.
Notice
nums.length will be between 1 and 50,000.
nums[i] will be an integer between 0 and 49,999.
*/

struct unit {
public:
    int count;
    int start;
    int end;
    explicit unit(int _count = 1, int _start = -1, int _end = -1):
    count(_count), start(_start), end(_end) {};
};

class Solution {
public:
    /**
     * @param nums: a list of integers
     * @return: return a integer
     */
    int findShortestSubArray(vector<int> &nums) {
        // write your code here
        unordered_map<int, unit> hashMap;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (hashMap.count(nums[i]))
            {
                ++hashMap[nums[i]].count;
                hashMap[nums[i]].end = i;
            }
            else
            {
                hashMap[nums[i]] = unit(1, i, -1);
            }
        }
        unit degree(INT_MIN, INT_MIN);
        for (auto&& elem: hashMap)
        {
            if (elem.second.count > degree.count)
                degree = elem.second;
        }
        return degree.end - degree.start + 1;
    }
};