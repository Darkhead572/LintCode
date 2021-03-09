/*
25. Print X
Given a positive integer N, you need to return a list string like this.

Example
Example 1:

Input：1
Output：
[
"X"
]
Example 2:

Input：2
Output：
[
"XX",
"XX"
]
Example 3:

Input：3
Output：
[
"X X",
" X ",
"X X"
]
Example 4:

Input：4
Output：
[
"X  X",
" XX ",
" XX ",
"X  X"
]
Example 5:

Input：5
Output：
[
"X   X",
" X X ",
"  X  ",
" X X ",
"X   X"
]
*/

/*
25. 打印X
输入一个正整数N， 你需要按如下方式返回一个字符串列表。

Example
样例 1:

输入：1
输出：
[
"X"
]
样例 2:

输入：2
输出：
[
"XX",
"XX"
]
样例 3:

输入：3
输出：
[
"X X",
" X ",
"X X"
]
样例 4:

输入：4
输出：
[
"X  X",
" XX ",
" XX ",
"X  X"
]
样例 5:

输入：5
输出：
[
"X   X",
" X X ",
"  X  ",
" X X ",
"X   X"
]
*/

class Solution {
public:
    /**
     * @param n: An integer.
     * @return: A string list.
     */
    vector<string> printX(int n) {
        // write your code here.
        string tmp(n, ' ');
        vector<string> result(n, tmp);
        if (n & 1)
            result[n / 2][n / 2] = 'X';
        for (int i = 0; i < n / 2; ++i)
        {
            result[i][i] = result[i][n - i - 1] = 'X';
            result[n - i - 1] = result[i];
        }
        return result;
    }
};