/*

requirements

1032. Letter Case Permutation
Given a string S, we can transform every letter individually to be lowercase or uppercase to create another string. Return a list of all possible strings we could create.

Example
Example 1:

Input: S = "a1b2"
Output: ["a1b2", "a1B2", "A1b2", "A1B2"]
Example 2:

Input: S = "3z4"
Output: ["3z4", "3Z4"]
Example 3:

Input: S = "12345"
Output: ["12345"]
Notice
S will be a string with length at most 12.
S will consist only of letters or digits.
*/

class Solution {
public:
    /**
     * @param S: a string
     * @return: return a list of strings
     */
    vector<string> letterCasePermutation(string &S) {
        // write your code here
        vector<string> res;
        backward(S, res, "", 0);
        return res;
    }
private:
    void backward(const string S, vector<string>& res, string now, int start) {
        if (start == S.size())
        {
            res.push_back(now);
            return;
        }
        if (isdigit(S[start]))
            backward(S, res, now + S[start], start + 1);
        else
        {
            backward(S, res, now + (char)toupper(S[start]), start + 1);
            backward(S, res, now + (char)tolower(S[start]), start + 1);
        }
    }
};