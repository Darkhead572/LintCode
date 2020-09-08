/*

requirements

812. Bold Words in String
Given a set of keywords words and a string S, make all appearances of all keywords in S bold. Any letters between <b> and </b> tags become bold.
The returned string should use the least number of tags possible, and of course the tags should form a valid combination.

Example
Example 1:

Input:
["ab", "bc"]
"aabcd"
Output:
"a<b>abc</b>d"

Explanation:
Note that returning "a<b>a<b>b</b>c</b>d" would use more tags, so it is incorrect.
Example 2:

Input:
["bcccaeb","b","eedcbda","aeebebebd","ccd","eabbbdcde","deaaea","aea","accebbb","d"]
"ceaaabbbedabbecbcced"
Output:
"ceaaa<b>bbb</b>e<b>d</b>a<b>bb</b>ec<b>b</b>cce<b>d</b>"
Notice
words has length in range [0, 50].
words[i] has length in range [1, 10].
S has length in range [0, 500].
All characters in words[i] and S are lowercase letters.

*/

class Solution {
public:
    /**
     * @param words: the words
     * @param S: the string
     * @return: the string with least number of tags
     */
    string boldWords(vector<string> &words, string &S) {
        // Write your code here
        int n = S.size(); string res;
        unordered_set<int> bold;      
        for (string word : words)
        {
            int len = word.size();
            for (int i = 0; i <= n - len; ++i)
            {
                if (S[i] == word[0] && S.substr(i, len) == word)
                {
                    for (int j = i; j < i + len; ++j)
                        bold.insert(j);
                }
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if (bold.count(i) && !bold.count(i - 1))
                res += "<b>";
            res.push_back(S[i]);
            if (bold.count(i) && !bold.count(i + 1))
                res += "</b>";
        }
        return res;
    }
};