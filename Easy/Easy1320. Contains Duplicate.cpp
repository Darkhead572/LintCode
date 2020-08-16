/*

requirements

1320. Contains Duplicate
Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

Example
Example 1：

Input：nums = [1, 1]
Output：True
Example 2：

Input：nums = [1, 2, 3]
Output：False
*/

class Solution {
public:
    /**
     * @param nums: the given array
     * @return: if any value appears at least twice in the array
     */
    bool containsDuplicate(vector<int> &nums) {
        // Write your code here
        unordered_map<int, int> hashMap;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (!hashMap.count(nums[i]))
                hashMap[nums[i]] = 1;
            else ++hashMap[nums[i]];
        }
        for (auto &&elem: hashMap)
            if (elem.second > 1)
                return true;
        return false;
    }
};