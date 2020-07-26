/*

278. Paint Fill
Implement the "paint fill" function that one might see on many image editing programs. That is, given a screen (represented by a two-dimensional array of colors), a point, and a new color, fill in the surrounding area until the color changes from the original color.

样例
Example 1:

Input: screen = [[2,2,5], [1,3,3]], x = 1, y = 1, newColor = 4
Output: true
Explanation: 
The new color of the position of the given point is not the same as the old color
Example 2:

Input: screen = [[5,4,1],[4,2,4]], x = 0, y = 2, newColor = 1
Output: false
Explanation: 
The new color of the position of the given point is the same as the old color
注意事项
The type of color is an integer point in the interval [1, 5]
The surrounding area refers to the up, down, left and right
*/

class Solution {
public:
    /**
     * @param screen: a two-dimensional array of colors
     * @param x: the abscissa of the specified point
     * @param y: the ordinate of the specified point
     * @param newColor: the specified color
     * @return: Can it be filled
     */
    bool paintFill(vector<vector<int>> &screen, int x, int y, int newColor) {
        // write your code here.
        return screen[x][y] != newColor;
    }
};