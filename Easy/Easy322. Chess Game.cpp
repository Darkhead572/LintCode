/*

requirements

322. Chess Game
In a game of chess, you are given two binary arrays:
a binary array queen with size N, which represents the coordinates of N queens;
a binary array knight with size M, which represents the coordinates of M knights.
A queen can attack any knight chess in the same row, column and diagonal.
You are asked to return an answer array with size M, the ith element of which shows whether the ith knight can be attacked.

Example
Example:
Input: [[1,1],[2,2]]
[[3,3],[1,3],[4,5]]
Output: [true,true,false]
Explanation: The first knight can be attacked by queen 1 and 2.
The second knight can be attacked by queen 1 and 2.
The last knight can not be attacked.

Notice
1 \leq N,M \leq 10^51≤N,M≤10
​5
​​ 
The range of chess coordinates is a positive integer from 11 to 10^910
​9
​​
*/

class Solution {
public:
    /**
     * @param queen: queen‘coordinate
     * @param knight: knight‘coordinate
     * @return: if knight is attacked please return true，else return false
     */
    vector<bool> isAttacked(vector<vector<int>> &queen, vector<vector<int>> &knight) {
        // write your code here
        set<int> rows, cols, ssum, diff;
        for (int i = 0; i < queen.size(); ++i)
        {
            rows.insert(queen[i][0]);
            cols.insert(queen[i][1]);
            ssum.insert(queen[i][0] + queen[i][1]);
            diff.insert(queen[i][0] - queen[i][1]);
        }
        vector<bool> res;
        int x = 0, y = 0;
        for (int i = 0; i < knight.size(); ++i)
        {
            x = knight[i][0], y = knight[i][1];
            res.emplace_back(move(rows.count(x) || cols.count(y) || ssum.count(x + y) || diff.count(x - y)));
        }
        return res;
    }
};