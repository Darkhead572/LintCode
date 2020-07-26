/*

requirements

433. Number of Islands
Given a boolean 2D matrix, 0 is represented as the sea, 1 is represented as the island. If two 1 is adjacent, we consider them in the same island. We only consider up/down/left/right adjacent.

Find the number of islands.

Example
Example 1:

Input:
[
  [1,1,0,0,0],
  [0,1,0,0,1],
  [0,0,0,1,1],
  [0,0,0,0,0],
  [0,0,0,0,1]
]
Output:
3
Example 2:

Input:
[
  [1,1]
]
Output:
1
*/

class Solution {
public:
    /**
     * @param grid: a boolean 2D matrix
     * @return: an integer
     */
    void dfs(vector<vector<bool>> &grid, int i, int j){
        int dir[4][2] = { 1, 0, -1, 0, 0, 1, 0, -1 };
        int n = grid.size(), m = grid[0].size();
        for (int k = 0; k < 4; ++k)
        {
            int next_i = i + dir[k][0], next_j = j + dir[k][1];
            if(next_i >= 0 && next_i < n && next_j >= 0 && next_j < m && grid[next_i][next_j])
            {
                grid[next_i][next_j] = false;
                dfs(grid, next_i, next_j);
            }
        }
    }
    int numIslands(vector<vector<bool>> &grid) {
        // write your code here
        if(grid.size()==0) return 0;
        int n = grid.size(), m = grid[0].size();
        int ans = 0;
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(grid[i][j])
                {
                    dfs(grid, i, j);
                    ++ans;
                }
            }
        }
        return ans;
    }
};