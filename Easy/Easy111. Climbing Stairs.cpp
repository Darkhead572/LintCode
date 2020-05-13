/* requirements

111. Climbing Stairs
中文English
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example
Example 1:
	Input:  n = 3
	Output: 3
	
	Explanation:
	1) 1, 1, 1
	2) 1, 2
	3) 2, 1
	total 3.


Example 2:
	Input:  n = 1
	Output: 1
	
	Explanation:  
	only 1 way.

*/

class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        // write your code here
        if(n == 0) return 0;
        int a = 0;
        int b = 1;
        while (n > 0){
            b = a + b;
            a = b - a;
            n--;
        }
        return b;
    }
};
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