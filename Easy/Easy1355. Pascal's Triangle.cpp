/*

requirements

1355. Pascal's Triangle
Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it.

Example
Example 1:

Input: 5
Output:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
Example 2:

Input: 3
Output:
[
     [1],
    [1,1],
   [1,2,1]
]

*/

class Solution {
public:
    /**
     * @param numRows: num of rows
     * @return: generate Pascal's triangle
     */
    vector<vector<int>> generate(int numRows) {
        // write your code here
        vector<vector<int>> res(numRows, vector<int>());
        for (int i = 0; i < numRows; ++i)
        {
            res[i].resize(i + 1, 1);
            for (int j = 1; j < i; ++j)
                res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
        }
        return res;
    }
};