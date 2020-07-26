/*

requirements
255. Multi-string search
Given a source string sourceString and a target string array targetStrings, determine whether each string in the target string array is a substring of the source string

Example
Example 1:

Input: sourceString = "abc" ，targetStrings = ["ab","cd"]
Output: [true, false]
Example 2:

Input: sourceString = "lintcode" ，targetStrings = ["lint","code","codes"]
Output: [true,true,false]	
Notice
len(sourceString) <= 1000
sum(len(targetStrings[i])) <= 1000
*/

class Solution {
public:
    /**
     * @param sourceString: a string
     * @param targetStrings: a string array
     * @return: Returns a bool array indicating whether each string in targetStrings is a substring of the sourceString
     */
    vector<bool> whetherStringsAreSubstrings(string &sourceString, vector<string> &targetStrings) {
        // write your code here
        vector<bool> Returns;
        for (int i = 0; i < targetStrings.size(); ++i)
        {
            int pos = sourceString.find(targetStrings[i]);
            if (pos == -1) Returns.push_back(false);
            else Returns.push_back(true);
        }
        return Returns;
    }
};