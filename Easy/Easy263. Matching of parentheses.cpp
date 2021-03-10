/*
263. Matching of parentheses
Given a string containing just the characters '(', ')', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()" are all valid but "(]" and ")(" are not.
*/

/*
263. 小括号匹配
给定一个字符串所表示的括号序列，包含以下字符： '(', ')'， 判定是否是有效的括号序列。

括号必须依照 "()" 顺序表示， "()" 是有效的括号，但 ")(" 则是无效的括号。

Example
样例 1：

输入：")("
输出：False
样例 2：

输入："()"
输出：True
*/

class Solution {
public:
    /**
     * @param string: A string
     * @return: whether the string is a valid parentheses
     */
    bool matchParentheses(string &string) {
        // write your code here
        stack<char> st;
        for (int i = 0; i < string.size(); ++i)
        {
            if (st.empty())
                st.push(string[i]);
            else if (st.top() == '(' && string[i] == ')')
                st.pop();
            else st.push(string[i]);
        }
        return st.empty();
    }
};