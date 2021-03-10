/*
196. Missing Number
Given an array contains N numbers of 0 .. N, find which number doesn't exist in the array.

Example
Example 1:

Input:[0,1,3]
Output:2
Example 2:

Input:[1,2,3]
Output:0
Challenge
Do it in-place with O(1) extra memory and O(n) time.
*/

/*
196. 寻找缺失的数
给出一个包含 0 .. N 中 N 个数的序列，找出0 .. N 中没有出现在序列中的那个数。

Example
样例 1:

输入:[0,1,3]
输出:2
样例 2:

输入:[1,2,3]
输出:0
Challenge
在数组上原地完成，使用O(1)的额外空间和O(N)的时间。
*/

class Solution {
public:
    /**
     * @param nums: An array of integers
     * @return: An integer
     */
    int findMissing(vector<int> &nums) {
        // write your code here
        if (nums.size() == 1)
            return 1;
        int sum = 0, pratical = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            pratical += nums[i];
            sum += i + 1;
        }
        return sum - pratical;
    }
};