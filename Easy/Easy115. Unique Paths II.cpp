/*

requirements
115. Unique Paths II
中文English
Follow up for "Unique Paths":

Now consider if some obstacles are added to the grids. How many unique paths would there be?

An obstacle and empty space is marked as 1 and 0 respectively in the grid.

Example
Example 1:
	Input: [[0]]
	Output: 1


Example 2:
	Input:  [[0,0,0],[0,1,0],[0,0,0]]
	Output: 2
	
	Explanation:
	Only 2 different path.
	

Notice
m and n will be at most 100.

*/

class Solution {
public:
    /**
     * @param obstacleGrid: A list of lists of integers
     * @return: An integer
     */
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
        // write your code here
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector< vector<int> > sum(m, vector<int>(n, INT_MIN));
        
        for(auto i = m - 1; i >= 0; --i)
        {
            for(auto j = n - 1; j >= 0; --j)
            {
                if(obstacleGrid[i][j]) sum[i][j] = 0;
                else if(i == m - 1 && j == n - 1)  sum[i][j] = 1;
                else if(i == m - 1) sum[i][j] = sum[i][j+1];
                else if(j == n - 1) sum[i][j] = sum[i+1][j];
                else sum[i][j] = sum[i + 1][j] + sum[i][j + 1];
            }
        }
        return sum[0][0];
    }
};