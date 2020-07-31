/*

requirements

1102. Image Smoother
Given a 2D integer matrix M representing the gray scale of an image, you need to design a smoother to make the gray scale of each cell becomes the average gray scale (rounding down) of all the 8 surrounding cells and itself. If a cell has less than 8 surrounding cells, then use as many as you can.

Example
Example 1:

Input:
[[1,1,1],
 [1,0,1],
 [1,1,1]]
Output:
[[0, 0, 0],
 [0, 0, 0],
 [0, 0, 0]]
Explanation:
For the point (0,0), (0,2), (2,0), (2,2): floor(3/4) = floor(0.75) = 0
For the point (0,1), (1,0), (1,2), (2,1): floor(5/6) = floor(0.83333333) = 0
For the point (1,1): floor(8/9) = floor(0.88888889) = 0
Notice
1.The value in the given matrix is in the range of [0, 255].
2.The length and width of the given matrix are in the range of [1, 150].


*/

class Solution {
public:
    /**
     * @param M: a 2D integer matrix
     * @return: a 2D integer matrix
     */
    int calAvgGreyScale(vector<vector<int>> &M, const int &i, const int &j)
    {
        int line = M.size();
        int col = M[0].size();
        int res = 0, cnt = 0;
        // add itself
        res += M[i][j], ++cnt;
        // four corners
        if (i - 1 >= 0 && j + 1 < col)
            res += M[i - 1][j + 1], ++cnt;
        if (i - 1 >= 0 && j - 1 >= 0)
            res += M[i - 1][j - 1], ++cnt;
        if (i + 1 < line && j - 1 >= 0)
            res += M[i + 1][j - 1], ++cnt;
        if (i + 1 < line && j + 1 < col)
            res += M[i + 1][j + 1], ++cnt;
        // UDLR
        if (i - 1 >= 0)
            res += M[i - 1][j], ++cnt;
        if (i + 1 < line)
            res += M[i + 1][j], ++cnt;
        if (j - 1 >= 0)
            res += M[i][j - 1], ++cnt;
        if (j + 1 < col)
            res += M[i][j + 1], ++cnt;
        return res / cnt;
        
    }
    vector<vector<int>> imageSmoother(vector<vector<int>> &M) {
        // Write your code here
        vector<vector<int>> res(M.size(), vector<int>(M[0].size(), 0));
        for (int i = 0; i < M.size(); ++i)
        for (int j = 0; j < M[0].size(); ++j)
            res[i][j] = calAvgGreyScale(M, i, j);
        return res;
    }
};