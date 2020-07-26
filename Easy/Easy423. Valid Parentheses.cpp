/*

requirements

423. Valid Parentheses
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

Example
Example 1:

Input: "([)]"
Output: False
Example 2:

Input: "()[]{}"
Output: True
Challenge
Use O(n) time, n is the number of parentheses.
*/

class Solution {
public:
    /**
     * @param s: A string
     * @return: whether the string is a valid parentheses
     */
    bool isValidParentheses(string &s) {
        // write your code here
        stack<char> st;
        for (int i = 0; i < s.length(); ++i)
        {
            if (!st.empty())
            {
                if (st.top() == '(' && s[i] == ')')
                {
                    st.pop();
                    continue;
                }
                else if (st.top() == '[' && s[i] == ']')
                {
                    st.pop();
                    continue;
                }
                else if (st.top() == '{' && s[i] == '}')
                {
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]);
        }
        return st.empty();
    }
};