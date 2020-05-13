/*
8. Rotate String
中文English
Given a string(Given in the way of char array) and an offset, rotate the string by offset in place. (rotate from left to right).

Example
Example 1:

Input: str="abcdefg", offset = 3
Output: str = "efgabcd"	
Explanation: Note that it is rotated in place, that is, after str is rotated, it becomes "efgabcd".
Example 2:

Input: str="abcdefg", offset = 0
Output: str = "abcdefg"	
Explanation: Note that it is rotated in place, that is, after str is rotated, it becomes "abcdefg".
Example 3:

Input: str="abcdefg", offset = 1
Output: str = "gabcdef"	
Explanation: Note that it is rotated in place, that is, after str is rotated, it becomes "gabcdef".
Example 4:

Input: str="abcdefg", offset =2
Output: str = "fgabcde"	
Explanation: Note that it is rotated in place, that is, after str is rotated, it becomes "fgabcde".
Example 5:

Input: str="abcdefg", offset = 10
Output: str = "efgabcd"	
Explanation: Note that it is rotated in place, that is, after str is rotated, it becomes "efgabcd".
Challenge
Rotate in-place with O(1) extra memory.

Clarification
in place means you should change string s in the function. You don't return anything.

Notice
offset >= 0
the length of str >= 0
Make changes on the original input data
*/


class Solution {
public:
    /**
     * @param str: An array of char
     * @param offset: An integer
     * @return: nothing
     */
    void rotateString(string &str, int offset) {
        // write your code here
        int m = str.length();
        if(!m) return;
        offset = offset % m;
        if(!offset) return;
        string tmp1 = str.substr(0, m - offset);
        string tmp2 = str.substr(m - offset, offset);
        str = tmp2 + tmp1;
    }
};
