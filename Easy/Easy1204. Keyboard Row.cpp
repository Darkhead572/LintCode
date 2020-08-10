/*

requirements

1204. Keyboard Row
Given a List of words, return the words that can be typed using letters of alphabet on only one row's of American keyboard like the image below.



Example
Input: ["Hello", "Alaska", "Dad", "Peace"]
Output: ["Alaska", "Dad"]
Notice
You may use one character in the keyboard more than once.
You may assume the input string will only contain letters of alphabet.
*/

class Solution {
public:
    /**
     * @param words: a list of strings
     * @return: return a list of strings
     */
    vector<string> findWords(vector<string> &words) {
        // write your code here
        vector<string> s = { "qwertyuiopQWERTYUIOP",
                             "asdfghjklASDFGHJKL",
                             "ZXCVBNMzxcvbnm" };
        vector<string> res;
        for (int i = 0; i < words.size(); ++i)
        {
            for (int j = 0; j < s.size(); ++j)
            {
                int pos = s[j].find(words[i][0]);
                if (pos == -1)
                    continue;
                int k = 1;
                for (k = 1; k < words[i].size(); k++)
                {
                    if (s[j].find(words[i][k]) == -1)
                        break;
                }
                if (k == words[i].size())
                {
                    res.push_back(words[i]);
                    break;
                }
            }
        }
        return res;
    }
};