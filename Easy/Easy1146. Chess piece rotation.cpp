/*

requirements

1146. Chess piece rotation
The 4x4 board is filled with black and white pieces. The positions and numbers of black and white are random. The coordinates of the upper left corner are (1,1) and the coordinates of the lower right corner are (4,4). Now there are some flip operations in turn. The colors of the four pieces up, down, left, and right are centered on the given pivot coordinates. Please calculate the color of the board after the flip.
Given two arrays A and f, they are the initial chessboard and flip position, respectively. There are 3 flip positions.

Example
Example 1:

Input: 
A:[[0,0,1,1],[1,0,1,0],[0,1,1,0],[0,0,1,0]]
F：[[2,2],[3,3],[4,4]]
Output: [[0,1,1,1],[0,0,1,0],[0,1,1,0],[0,0,1,0]]
Notice
Please return to the flipped board.
*/

class Solution {
public:
    /**
     * @param A: Initial chessboard
     * @param F: Flipped coordinates
     * @return:  return to the flipped board.
     */
    vector<vector<int>> ChessPieceRotation(vector<vector<int>> &A, vector<vector<int>> &F) {
        // write your code here
        int dx[4] = { 0, -1, 0, 1 };
        int dy[4] = { -1, 0, 1, 0 }; 
        for (size_t i = 0; i < F.size(); ++i)
        {
            int x = F[i][0] - 1, y = F[i][1] - 1;
            for (int j = 0; j < 4; ++j)
            {
                if (
                    x + dx[j] > -1 &&
                    x + dx[j] < 4 &&
                    y + dy[j] > -1 &&
                    y + dy[j] < 4
                    )
                {
                    A[x + dx[j]][y + dy[j]] = 1 - A[x + dx[j]][y + dy[j]];
                }
            }
        }
        return A;
    }
};