/* requirements

110. Minimum Path Sum
中文English
Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path.

Example
Example 1:
	Input:  [[1,3,1],[1,5,1],[4,2,1]]
	Output: 7
	
	Explanation:
	Path is: 1 -> 3 -> 1 -> 1 -> 1


Example 2:
	Input:  [[1,3,2]]
	Output: 6
	
	Explanation:  
	Path is: 1 -> 3 -> 2

Notice
You can only go right or down in the path..

*/

class Solution {
public:
    /**
     * @param grid: a list of lists of integers
     * @return: An integer, minimizes the sum of all numbers along its path
     */
    int minPathSum(vector<vector<int>> &grid) {
        // write your code here
        int m = grid.size();
        int n = grid[0].size();
        
        if(m == 0) return 0;
        
        vector<int> tmp(n, INT_MAX);
        vector<vector<int> > min(m, tmp);
        
        for(int i = m - 1; i >= 0; --i)
        {
            for(int j = n - 1; j >= 0; --j)
            {
                if(i == m - 1 && j == n - 1)
                    min[i][j] = grid[i][j];
                if(i == m - 1 && j < n - 1)
                    min[i][j] = grid[i][j] + min[i][j + 1];
                if(i < m - 1 && j == n - 1)
                    min[i][j] = grid[i][j] + min[i + 1][j];
                if(i < m - 1 && j < n - 1)
                    min[i][j] = grid[i][j] + (min[i + 1][j] < min[i][j + 1]? min[i + 1][j]: min[i][j + 1]);
            }
        }
        return min[0][0];
    }
};