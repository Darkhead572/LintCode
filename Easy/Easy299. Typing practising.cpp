/*
299. Typing practising
Xiaoqian is teaching his younger brother Xiaoquan to type, but his younger brother always makes mistakes. When his younger brother makes mistakes, Xiaoqian always presses the '<' symbol to delete the wrong character. ('<' stands for backspace)
Xiaoquan is now at the primary level, so all the characters he typed are lowercase.
What is the correct result after deleting the wrong character?

Example
Example 1:

Input: 
aabbcc<<<dd
Output: 
aabdd
Explanation: 
< indicates deletion, with a total of three characters deleted
Notice
Character length not exceeding 10000
*/

/*
299. 打字练习
小千在教弟弟小泉打字，可是弟弟老是打错，当弟弟打错时，小千总是会按下'<'符号，表示删除错误的一个字符。（'<'代表回退backspace）
小泉现在是初级水平，所以他打的字符均是小写字母。
请问删除错误的字符后，正确的结果是什么呢？

Example
样例 1：

输入： 
aabbcc<<<dd
输出： 
aabdd
解释： 
 < 表示删除，总共删除了三个字符
Notice
字符长度不超过10000
*/

class Solution {
public:
    /**
     * @param s: A string
     * @return: A string
     */
    string getTextcontent(string &s) {
        // write your code here.
        string result;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] != '<')
                result += s[i];
            else if (s[i] == '<' && !result.empty())
                result.pop_back();
            else continue;
        }
        return result;
    }
};