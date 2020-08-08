/*

requirements

1283. Reverse String
Write a function that takes a string as input and returns the string reversed.

Example
Example 1：

Input："hello"
Output："olleh"
Example 2：

Input："hello world"
Output："dlrow olleh"
*/

class Solution {
public:
    /**
     * @param s: a string
     * @return: return a string
     */
    string reverseString(string &s) {
        // write your code here
        int len = s.size();
        int start = 0, end = len - 1;
        while(start < end)
            swap(s[start++], s[end--]);
        
        for (int i = 0; i < s.size();++i )
        {
            if (s[i] == '\\' && i - 1 >= 0)
                swap(s[i], s[i - 1]);
        }
        return s;
    }
};