/*

requirements

1112. Set Mismatch
The set S originally contains numbers from 1 to n. But unfortunately, due to the data error, one of the numbers in the set got duplicated to another number in the set, which results in repetition of one number and loss of another number.

Given an array nums representing the data status of this set after the error. Your task is to firstly find the number occurs twice and then find the number that is missing. Return them in the form of an array.

Example
Example 1:

Input: nums = [1,2,2,4]
Output: [2,3]
Explanation:
2 is the number occurs twice, 3 is the missing number.
Example 2:

Input: nums = [1,3,3,4]
Output: [3,2]
Explanation:
3 is the number occurs twice, 2 is the missing number.
Notice
1.The given array size will in the range [2, 10000].
2.The given array's numbers won't have any order.
*/

class Solution {
public:
    /**
     * @param nums: an array
     * @return: the number occurs twice and the number that is missing
     */
    vector<int> findErrorNums(vector<int> &nums) {
        // Write your code here
        int m = nums.size();
        vector<bool> visited(m, false);
        vector<int> res(2, -1);
        for (size_t i = 0; i < m; ++i)
        {
            // if haven't visited, visit it. 
            if (!visited[nums[i] - 1])
                visited[nums[i] - 1] = true;
            else
                res[0] = nums[i];
        }
        for (size_t i = 0; i < m; ++i)
        {
            if (!visited[i])
            {
                res[1] = i + 1;
                break;
            }
        }
        return res;
    }
};