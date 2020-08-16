/*

requirements

1243. Number of Segments in a String
Count the number of segments in a string, where a segment is defined to be a contiguous sequence of non-space characters.

Example
Example:

Input: "Hello, my name is John"
Output: 5
Explanation：There are five string "Hello"、"my"、"name"、"is"、"John"
Notice
the string does not contain any non-printable characters.
*/

class Solution {
public:
    /**
     * @param s: a string
     * @return: the number of segments in a string
     */
    int countSegments(string &s) {
        // write yout code here
        int res = 0;
        for(int i = 0; i < s.length(); ++i)
        {
            if(!isspace(s[i]) && (s[i - 1] == ' ' || !i))
                ++res;
        }
        return res;
    }
};