/*

requirements

684. Missing String
Given two strings, you have to find the missing string.

Example
Example 1:

Input : str1 = "This is an example", str2 = "is example"
Output : ["This", "an"]
Notice
The output string order is the order within the input string
*/

class Solution {
public:
    /**
     * @param str1: a given string
     * @param str2: another given string
     * @return: An array of missing string
     */
    vector<string> missingString(string& str1, string& str2) {
        // Write your code here
        set<string> matches;
        vector<string> missing;
        for (size_t i = 0; i < str2.length(); )
        {
            if (str2[i] == ' ')
                ++i;
            else
            {
                string tmpStr;
                while (i < str2.length() && str2[i] != ' ')
                    tmpStr += str2[i++];
                matches.insert(tmpStr);
            }
        }
        for (size_t i = 0; i < str1.length(); )
        {
            if (str1[i] == ' ')
                ++i;
            else
            {
                string tmpStr;
                while (i < str1.length() && str1[i] != ' ')
                    tmpStr += str1[i++];
                if (!matches.count(tmpStr))
                    missing.push_back(tmpStr);
            }
        }
        return missing;
    }
};