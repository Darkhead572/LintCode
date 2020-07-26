/*

requirements

770. Maximum and Minimum
Given a matrix, return the maximum number and the minimum number.

Example
Example 1:

Input : 
[
 [1,2,3],
 [4,3,2],
 [6,4,4]
]
Output : [6,1]
Notice
Your need to return a integer array, that array[0] represent the maximum and array[1] represent the minimum.
*/

class Solution {
public:
    /**
     * @param matrix: an input matrix 
     * @return: nums[0]: the maximum,nums[1]: the minimum
     */
    vector<int> maxAndMin(vector<vector<int>> &matrix) {
        // write your code here
        if (matrix.empty() || matrix[0].empty()) return {};
        vector<int> res = { INT_MIN, INT_MAX };
        for (int i = 0; i < matrix.size(); ++i)
        {
            for (int j = 0; j < matrix[i].size(); ++j)
            {
                res[0] = max(res[0], matrix[i][j]);
                res[1] = min(res[1], matrix[i][j]);
            }
        }
        return res;
    }
};