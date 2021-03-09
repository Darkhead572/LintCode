/*
1906. Look for points that are bigger than the surrounding area
Given a matrix of size n*m, look for all points in the matrix that are strictly larger than the neighbors (up, down, left, and right, the diagonal is also counted, regardless of the boundary is 8).
Returns a matrix of size n*m. If the points in the original matrix are strictly larger than neighbors, the position is 1, otherwise it is 0.

Example
Example 1

input:
1 2 3
4 5 8
9 7 0
output:
0 0 0
0 0 1
1 0 0
Notice
1 \leq n,m \leq 1001≤n,m≤100
*/

/*
1906. 寻找比周围都大的点
给一个n*m大小的矩阵，寻找矩阵中所有比邻居（上下左右，对角也算，不考虑边界，即8个）都严格大的点。
返回一个n*m大小的矩阵，如果原矩阵中的点比邻居都严格大，则该位置为1，反之为0。

Example
样例 1

输入:
1 2 3
4 5 8
9 7 0
输出:
0 0 0
0 0 1
1 0 0
Notice
1 \leq n,m \leq 1001≤n,m≤100
*/

class Solution {
public:
    /**
     * @param grid: a matrix
     * @return: Find all points that are strictly larger than their neighbors
     */
    bool isBigger(vector<vector<int>> &grid, const int& i, const int& j)
    {
        int m = grid.size();
        int n = grid[0].size();

        // Up Down Left Right
        if (i - 1 >= 0 && grid[i][j] <= grid[i - 1][j])
            return false;
        if (i + 1 < m && grid[i][j] <= grid[i + 1][j])
            return false;
        if (j - 1 >= 0 && grid[i][j] <= grid[i][j - 1])
            return false;
        if (j + 1 < n && grid[i][j] <= grid[i][j + 1])
            return false;
        
        // Left/Right Top/Bottom
        if (i - 1 >= 0 && j - 1 >= 0 && grid[i][j] <= grid[i - 1][j - 1])
            return false;
        if (i - 1 >= 0 && j + 1 < n && grid[i][j] <= grid[i - 1][j + 1])
            return false;
        if (i + 1 < m && j - 1 >= 0 && grid[i][j] <= grid[i + 1][j - 1])
            return false;
        if (i + 1 < m && j + 1 < n && grid[i][j] <= grid[i + 1][j + 1])
            return false;
        return true;
    }
    vector<vector<int>> highpoints(vector<vector<int>> &grid) {
        // write your code here
        int m = grid.size();
        int n = grid[0].size();

        if (!m || !n)
            return {};

        vector<int> tmp(n, 0);
        vector<vector<int>> result(m, tmp);
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                result[i][j] = isBigger(grid, i, j);

        return result;
    }
};