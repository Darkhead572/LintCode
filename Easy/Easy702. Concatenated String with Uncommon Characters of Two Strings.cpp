/*

requirements

702. Concatenated String with Uncommon Characters of Two Strings
Two strings are given and you have to modify 1st string such that all the common characters of the 2nd strings have to be removed and the uncommon characters of the 2nd string have to be concatenated with uncommon characters of the 1st string.

Example
Example 1:

Input : s1 = "aacdb", s2 = "gafd"
Output : "cbgf"
Example 2:

Input : s1 = "abcs", s2 = "cxzca"
Output : "bsxz"
*/

class Solution {
public:
    /**
     * @param s1: the 1st string
     * @param s2: the 2nd string
     * @return: uncommon characters of given strings
     */
    string concatenetedString(string &s1, string &s2) {
        // write your code here
        if (s1.empty()) return s2;
        if (s2.empty()) return s1;
        set<char> set1, set2;
        for(size_t i = 0; i < s1.length(); ++i)
            set1.insert(s1[i]);
        for(size_t i = 0; i < s2.length(); ++i)
            set2.insert(s2[i]);
        string result;
        for(size_t i = 0; i < s1.length(); ++i)
        {
            if(set2.find(s1[i]) == set2.end())
                result.push_back(s1[i]);
        }
        for(size_t i = 0; i < s2.length(); ++i)
        {
            if(set1.find(s2[i]) == set1.end())
                result.push_back(s2[i]);
        }
        return result;
    }
};