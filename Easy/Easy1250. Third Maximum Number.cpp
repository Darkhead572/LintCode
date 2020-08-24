/*

requirements

1250. Third Maximum Number
Given a non-empty array of integers, return the third maximum number in this array. If it does not exist, return the maximum number. The time complexity must be in O(n).

Example
Example 1:

Input: num = [3, 2, 1]
Output: 1
Explanation: The third maximum is 1.
Example 2:

Input: num = [1, 2]
Output: 2
Explanation: The third maximum does not exist, so the maximum (2) is returned instead.
Example 3:

Input: num = [2, 2, 3, 1]
Output: 1
Explanation: Note that the third maximum here means the third maximum distinct number.
Both numbers with value 2 are both considered as second maximum.
*/

class Solution {
public:
    /**
     * @param nums: the array
     * @return: the third maximum number in this array
     */
    int thirdMax(vector<int> &nums) {
        // Write your code here.
        vector<long> res(3, LONG_MIN);
        for (int i = 0; i < nums.size(); ++i)
        {
            if(
                nums[i] == res[0] ||
                nums[i] == res[1] ||
                nums[i] == res[2]
            )
                continue;
            if (nums[i] > res[2])
            {
                res[0] = res[1];
                res[1] = res[2];
                res[2] = nums[i];
            }
            else if (nums[i] > res[1])
            {
                res[0] = res[1];
                res[1] = nums[i];
            }
            else if (nums[i] > res[0])
                res[0] = nums[i];
        }
        for (int i = 0; i < res.size(); ++i)
        {
            if (res[i] == LONG_MIN)
                return res[2];
        }
        return res[0];
    }
};