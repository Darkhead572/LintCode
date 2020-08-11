/*

requirements

769. Spiral Array
Given an integer n, return a spiral array of n * n sizes.

Example
Example 1:

Input : n = 3
Output : 
[
[1,2,3]
[8,9,4]
[7,6,5]
]
Example 2:

Input : n = 5
Output : 
[
 [1,2,3,4,5]
 [16,17,18,19,6]
 [15,24,25,20,7]
 [14,23,22,21,8]
 [13,12,11,10,9]
]
*/

class Solution {
public:
    /**
     * @param n: a Integer
     * @return: a spiral array
     */
    vector<vector<int>> spiralArray(int n)
    {
        // write your code here
        vector<vector<int>> res(n, vector<int>(n, -1));
        int count = 0;
        int total = n * n;
        int dr = 0, dc = 1;
        int r = 0, c = -1;
        while (count < n * n)
        {
            int nr = r + dr;
            int nc = c + dc;
            if (nr < 0 || nr >= n ||
                nc < 0 || nc >= n || res[nr][nc] != -1)
            {
                int temp = dc;
                dc = -dr;
                dr = temp;
            }
            r = r + dr;
            c = c + dc;
            res[r][c] = ++count;
        }
        return res;
    }
};