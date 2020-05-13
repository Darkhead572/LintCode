/*

requirements
114. Unique Paths
中文English
A robot is located at the top-left corner of a m x n grid.

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid.

How many possible unique paths are there?

Example
Example 1:

Input: n = 1, m = 3
Output: 1	
Explanation: Only one path to target position.
Example 2:

Input:  n = 3, m = 3
Output: 6	
Explanation:
	D : Down
	R : Right
	1) DDRR
	2) DRDR
	3) DRRD
	4) RRDD
	5) RDRD
	6) RDDR
Notice
m and n will be at most 100.
The answer is guaranteed to be in the range of 32-bit integers

*/

class Solution {
public:
    /**
     * @param m: positive integer (1 <= m <= 100)
     * @param n: positive integer (1 <= n <= 100)
     * @return: An integer
     */
    int uniquePaths(int m, int n) {
        // write your code here
        vector< vector<int> > sum(m, vector<int>(n, INT_MIN));
        for(auto i = m - 1; i >= 0; --i)
        {
            for(auto j = n - 1; j >= 0; --j)
            {
                if(i == m - 1 || j == n - 1)
                    sum[i][j] = 1;
                else
                    sum[i][j] = sum[i][j + 1] + sum[i + 1][j];
            }
        }
        return sum[0][0];
    }
};