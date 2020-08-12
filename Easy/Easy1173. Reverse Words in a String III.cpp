/*

requirements

1173. Reverse Words in a String III
Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example
Input: "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Notice
In the string, each word is separated by single space and there will not be any extra space in the string.
*/

class Solution {
public:
    /**
     * @param s: a string
     * @return: reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order
     */
    void reverse(string& str, const int& start, const int& end)
    {
        for (int i = 0; i < (end - start) / 2; ++i)
            swap(str[i + start], str[end - i - 1]);
    }
    string reverseWords(string &s) {
        // Write your code here
        int start = 0, end = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (isspace(s[i]))
                continue;
            else
            {
                start = i;
                while (i < s.length() && !isspace(s[i]))
                    ++i;
                end = i;
                reverse(s, start, end);
            }
        }
        return s;
    }
};