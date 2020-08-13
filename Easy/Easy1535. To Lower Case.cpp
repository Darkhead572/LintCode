/*

requirements

1535. To Lower Case
Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.

Example
Example 1:

Input: "Hello"
Output: "hello"
Example 2:

Input: "here"
Output: "here"
Example 3:

Input: "LOVELY"
Output: "lovely"
*/

class Solution {
public:
    /**
     * @param str: the input string
     * @return: The lower case string
     */
    string toLowerCase(string &str) {
        // Write your code here
        for (size_t i = 0; i < str.length(); ++i)
        {
            if (isupper(str[i]))
                str[i] += 32;
        }
        return str;
    }
};