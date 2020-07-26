/*

requirements

389. Valid Sudoku
Determine whether a Sudoku is valid.

The Sudoku board could be partially filled, where empty cells are filled with the character ..

Example
Example 1:

Input:
["53..7....","6..195...",".98....6.","8...6...3","4..8.3..1","7...2...6",".6....28.","...419..5","....8..79"]
Output: true
Explanation: 
The sudoku is look like this. It's vaild.
Valid Sudoku

Example 2:

Input:
["53..7j...","6..195...",".98....6.","8...6...3","4..8.3..1","7...2...6",".6....28.","...419..5","....8..79"]
Output: false
Explanation: 
The sudoku is look like this. It's invaild because there are two '5' in the first row and the sixth line.
image

Clarification
What is Sudoku?

http://sudoku.com.au/TheRules.aspx
https://zh.wikipedia.org/wiki/數獨
https://en.wikipedia.org/wiki/Sudoku
http://baike.baidu.com/subview/961/10842669.htm
Notice
A valid Sudoku board (partially filled) is not necessarily solvable. Only the filled cells need to be validated.
*/
class Solution {
public:
    /**
     * @param board: the board
     * @return: whether the Sudoku is valid
     */
    bool isValidSudoku(vector<vector<char>> &board) {
        // write your code here
        unordered_set<char> used;
        for (int row = 0; row < 9; row++)
        {
            used.clear();
            for (int col = 0; col < 9; col++)
            {
                if (not checkValid(board[row][col], used))
                {
                    return false;
                }
            }
        }
        for (int col = 0; col < 9; col++) 
        {
            used.clear();
            for (int row = 0; row < 9; row++) 
            {
                if (not checkValid(board[row][col], used))
                {
                    return false;
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++) 
            {
                used.clear();
                for (int row = i * 3; row < i * 3 + 3; row++) 
                {
                    for (int col = j * 3; col < j * 3 + 3; col++) 
                    {
                        if (not checkValid(board[row][col], used)) 
                            return false;
                    }
                }
            }
        }
        return true;
    }
    bool checkValid(char c, unordered_set<char>& used) 
    {
        if (c == '.') 
        {
            return true;
        }
        if (used.count(c))
        {
            return false;
        }
        used.insert(c);
        return true;
    }
};