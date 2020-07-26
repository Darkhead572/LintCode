/*

requirements

260. Same Diagonal Elements
Given a n * n matrix, if each diagonal line from top left to bottom right has the same value you should return true, otherwise return false.
For example：
1，2，3
5，1，2
6，5，1
This test should return true.

But
1，2，3
2，1，5
6，5，1
This test should return false.

样例
Sample 1:
Input: [[1,2,3], [5,1,2], [6,5,1]]
Output: true
Explanation: Each slash from top left to bottom right is the same element, returning true.

Example 2:
Input: [[1,2,3], [2,1,5], [6,5,1]]
Output: false
Explanation: The second slash and the fourth slash are [2, 5]. These two slashes do not satisfy this condition, so return false.

注意事项
n within the range is: [1, 500]
*/

class Solution {
public:
	/**
	 * @param matrix: a matrix
	 * @return: return true if same.
	 */
	// unknown bug
	/*
	bool judgeSame(vector<vector<int>>& matrix) {
		// write your code here.
		// traversing the main diagonal
		int m = matrix.size();
		int n = matrix[0].size();
		if (m != n)
			return false;
		int tmpElem = 0;
		for (int i = 0; i < m; ++i)
		{
			if (!i)
			{
				tmpElem = matrix[i][i];
			}
			else if (tmpElem != matrix[i][i])
			{
				return false;
			}
		}
		for (int i = 1; i < m; ++i)
		{
		    int elem1 = 0;
		    int elem2 = 0;
			for (int j = 0; j < m - i; ++j)
			{
				if (!j)
				{
					elem1 = matrix[j][i + j];
					elem2 = matrix[i + j][j];
				}
				else if (
				    elem1 != matrix[j][i + j] ||
				    elem2 != matrix[i + j][j]
				    )
				{
					return false;
				}
			}
		}
		return true;
	}
	*/
	bool judgeSame(vector<vector<int>>& matrix) {
		// write your code here.
		// traversing the main diagonal
		int n = matrix.size();
 
        vector<vector<int>> symmMatrix(n, vector<int>(n));
        reverse(matrix.begin(), matrix.end());
 
        //transpose
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                symmMatrix[i][j] = matrix[j][i];
            }
        }
 
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] != symmMatrix[i][j]) {
                    return false;
                }
            }
        }
        return true;
	}
};