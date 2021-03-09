/*
23. Is alphanumeric
Given a character c, you need to determine if it is a letter or a number by returning ‘true’ or 'false'.

Example
Example 1:

Input：'1'
Output：true
Notice
If you use Python, the input will be a string which has a length of 1.
*/

/*
23. 判断数字与字母字符
给出一个字符c，你需要判断它是不是一个数字字符或者字母字符。
如果是，返回true，如果不是返回false。

Example
样例 1:

输入：'1'
输出：true
Notice
如果您使用的是Python语言，那么输入将是一个长度为1的字符串。
*/

class Solution {
public:
    /**
     * @param c: A character.
     * @return: The character is alphanumeric or not.
     */
    bool isAlphanumeric(char c) {
        // write your code here
        return isalpha(c) || isdigit(c);
    }
};