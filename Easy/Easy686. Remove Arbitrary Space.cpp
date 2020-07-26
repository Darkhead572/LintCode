/*

requirements

686. Remove Arbitrary Space
Remove arbitrary spaces from a sentence

Example
Example 1:

Input: s = "The  sky   is blue"
Output: "The sky is blue"
Example 2:

Input: s = "  low               ercase  "
Output: "low ercase"
*/

class Solution {
public:
    /**
     * @param s: the original string
     * @return: the string without arbitrary spaces
     */
    string removeExtra(string &s) {
        // write your code here
        string str;
        for (stringstream istr(s); istr >> s; str += s + " ");
        if (str.length()) str.pop_back();
        return str;
    }
};