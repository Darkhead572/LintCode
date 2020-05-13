/*
46. Majority Element
中文English
Given an array of integers, the majority number is the number that occurs more than half of the size of the array. Find it.

Example
Example 1:

Input: [1, 1, 1, 1, 2, 2, 2]
Output: 1
Example 2:

Input: [1, 1, 1, 2, 2, 2, 2]
Output: 2
Challenge
O(n) time and O(1) extra space

Notice
You may assume that the array is non-empty and the majority number always exist in the array.
*/

class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: find a  majority number
     */
    int majorityNumber(vector<int> &nums) {
        // write your code here
        //use Moore's method of voting or standard template library-map
        //int this stuation, use Moore's method of voting
        
        int m = nums.size();
        if(m == 1) return nums[0];
        int count = 0;
        int major = -1;
        for(int i = 0; i < m; ++i)
        {
            if(!count) {
                major = nums[i];
                count = 1;
            }
            else major == nums[i]? ++count:--count;
        }
        int numbers = 0;
        for(int i = 0; i < m; ++i)
        {
            if(major == nums[i]) ++numbers;
        }
        if(numbers > m/2) return major;
        else return -1;
    }
};
