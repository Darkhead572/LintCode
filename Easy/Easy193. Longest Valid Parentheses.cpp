/*

requirements

193. Longest Valid Parentheses
Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

样例
Example 1:

Input: "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()"
Example 2:

Input: ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()"
*/

class Solution {
public:
    /**
     * @param s: a string
     * @return: return a integer
     */
    int longestValidParentheses(string& s) {
        // write your code here
        if(s.size() <= 1)
            return 0;
        int res = 0;
        vector<int> dp(s.size(), 0);
        for(int i = s.size() - 2; i >= 0; i--)
        {
            if(s[i] == '(')
            {
                int j = i + dp[i + 1] + 1;
                if(s[j] == ')' && j < s.size())
                {
                    dp[i] = dp[i + 1] + 2;
                    if(j + 1 < s.size())
                        dp[i] += dp[j + 1];
                }    
                res = max(res, dp[i]);
            }
        }
        return res;
    }
};