/*

requirements

828. Word Pattern
Given a pattern and a string str, find if str follows the same pattern.
Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in str.

Example
Example1

Input:  pattern = "abba" and str = "dog cat cat dog"
Output: true
Explanation:
The pattern of str is abba
Example2

Input:  pattern = "abba" and str = "dog cat cat fish"
Output: false
Explanation:
The pattern of str is abbc
Example3

Input:  pattern = "aaaa" and str = "dog cat cat dog"
Output: false
Explanation:
The pattern of str is abba
Example4

Input:  pattern = "abba" and str = "dog cat cat fish"
Output: false
Explanation:
The pattern of str is abbc
Notice
You may assume pattern contains only lowercase letters, and str contains lowercase letters separated by a single space.
*/

class Solution {
public:
    /**
     * @param pattern: a string, denote pattern string
     * @param teststr: a string, denote matching string
     * @return: an boolean, denote whether the pattern string and the matching string match or not
     */
    bool wordPattern(string &pattern, string &teststr) {
        unordered_map<char, string> hashMap1;
        unordered_map<string, char> hashMap2;
        vector<string> strs = splitString(teststr);
        
        if (strs.size() != pattern.size())
            return false;
            
        for (size_t i = 0; i < pattern.length(); i++)
        {
            if (!hashMap1.count(pattern[i]))
                hashMap1[pattern[i]] = strs[i];
            else if (hashMap1[pattern[i]] != strs[i])
                return false;
            
            if (!hashMap2.count(strs[i]))
                hashMap2[strs[i]] = pattern[i];
            else if (hashMap2[strs[i]] != pattern[i])
                return false;
        }
        return true;
    }
    
    vector<string> splitString(const string& str)
    {
        vector<string> result;
        string tempStr;
        for (char c: str)
        {
            if (c == ' ')
            {
                result.push_back(tempStr);
                tempStr.clear();
            }
            else
                tempStr += c;
        }
        result.push_back(tempStr);
        return result;
    }
};