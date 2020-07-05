/*

requirements

185. Matrix Zigzag Traversal

Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in ZigZag-order.

样例
Example 1:
	Input: [[1]]
	Output:  [1]

Example 2:
	Input:   
	[
    [1, 2,  3,  4],
    [5, 6,  7,  8],
    [9,10, 11, 12]
  ]

	Output:  [1, 2, 5, 9, 6, 3, 4, 7, 10, 11, 8, 12]
*/

class Solution {
public:
    /**
     * @param matrix: An array of integers
     * @return: An array of integers
     */
    vector<int> printZMatrix(vector<vector<int>> &matrix) {
        // write your code here
        vector<int> res;
		int m = matrix.size();
		int n = matrix[0].size();
		if (!m || !n)
			return res;
		int x = 0, y = 0;
		int dx = -1, dy = 1;
		int count = 1;
		res.push_back(matrix[0][0]);
		while (count < m * n)
		{
			if (x + dx >= 0 && y + dy >= 0 && x + dx < m && y + dy < n)
			{
				x += dx; y += dy;
			}
			else if (dx == -1 && dy == 1)
			{
				if (y + 1 < n) ++y;
				else ++x;
				dx = 1; dy = -1;
			}
			else
			{
				if (x + 1 < m) ++x;
				else ++y;
				dx = -1; dy = 1;
			}
			res.push_back(matrix[x][y]); ++count;
		}
		return res;
    }
};