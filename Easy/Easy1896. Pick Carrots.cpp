/*
1896. Pick Carrots
Given a n * m matrix carrot , carrot[i][j] denotes the number of carrots at coordinates (i, j) .
Starting from the center of the matrix, moving in the direction of the largest number of carrots in the four directions, guarantee that the direction of movement is unique.
Return the number of carrot you can get.

Example
Example 1:
Input:
carrot = 
[[5, 7, 6, 3],
[2,  4, 8, 12],
[3, 5, 10, 7],
[4, 16, 4, 17]]
Output: 
83
Explanation: 
start point is (1, 1), moving route is 4 -> 8 -> 12 -> 7 -> 17 -> 4 -> 16 -> 5 -> 10
Example 2:
Input:
carrot = 
[[5, 3, 7, 1, 7],
 [4, 6, 5, 2, 8],
 [2, 1, 1, 4, 6]]
 Output: 
 30
 Explanation: 
 start point is (1, 2), moving route is: 5 -> 7 -> 3 -> 6 -> 4 -> 5
Notice
n and m within the range is: [1, 300]
carrot[i][j] within the range is: [1, 20000]
The central point is rounded down, such as n = 4, m = 4, so the start point is (1, 1)
If there are no carrots around, stop moving.
*/

/*
1896. 捡胡萝卜
给定一个n * m 的矩阵 carrot, carrot[i][j] 表示(i, j) 坐标上的胡萝卜数量。
从矩阵的中心点出发，每一次移动都朝着四个方向中胡萝卜数量最多的方向移动，保证移动方向唯一。
返回你可以得到的胡萝卜数量。

Example
示例 1:
输入:
carrot = 
[[5, 7, 6, 3],
[2,  4, 8, 12],
[3, 5, 10, 7],
[4, 16, 4, 17]]
输出: 
83
解释：
起点坐标是(1, 1), 移动路线是：4 -> 8 -> 12 -> 7 -> 17 -> 4 -> 16 -> 5 -> 10
示例 2:
输入:
carrot = 
[[5, 3, 7, 1, 7],
 [4, 6, 5, 2, 8],
 [2, 1, 1, 4, 6]]
 输出: 
 30
 解释：
 起始点是 (1, 2), 移动路线是： 5 -> 7 -> 3 -> 6 -> 4 -> 5
Notice
n 和 m 的长度范围是: [1, 300]
carrot[i][j] 的取值范围是: [1, 20000]
中心点是向下取整, 例如n = 4, m = 4, start point 是 (1, 1)
如果格子四周都没有胡萝卜则停止移动
*/

class Solution {
public:
    /**
     * @param carrot: an integer matrix
     * @return: Return the number of steps that can be moved.
     */

    int find_next(vector<vector<int>> &carrot, vector<vector<bool>> &visited, const int& i, const int& j){
        int m = carrot.size();
        int n = carrot[0].size();

        int maximum = -1;
        int direction = -1;
        // Up Down Left Right
        if (i - 1 >= 0 && !visited[i - 1][j])
        {
            maximum = carrot[i - 1][j];
            direction = 0;
        }

        if (i + 1 < m && !visited[i + 1][j] && maximum < carrot[i + 1][j])
        {
            maximum = carrot[i + 1][j];
            direction = 1;
        }
        
        if (j - 1 >= 0 && !visited[i][j - 1] && maximum < carrot[i][j - 1])
        {
            maximum = carrot[i][j - 1];
            direction = 2;
        } 

        if (j + 1 < n && !visited[i][j + 1] && maximum < carrot[i][j + 1])
        {
            maximum = carrot[i][j + 1];
            direction = 3;
        }
        if (!maximum)
            return -1;
        return direction;
    }
    int PickCarrots(vector<vector<int>> &carrot) {
        // write your code here
        int result = 0;
        int m = carrot.size();
        int n = carrot[0].size();
        // Find central point of matrix
        int i = (m - 1) / 2;
        int j = (n - 1) / 2;

        vector<bool> tmp(n, false);
        vector<vector<bool>> visited(m, tmp);

        result += carrot[i][j];
        visited[i][j] = true;
        while (true)
        {
            int dir = find_next(carrot, visited, i, j);
            if (dir == -1)
                break;
            switch(dir)
            {
                case 0: --i; break;
                case 1: ++i; break;
                case 2: --j; break;
                case 3: ++j; break;
            }
            result += carrot[i][j];
            visited[i][j] = true;
        }
        return result;
    }
};