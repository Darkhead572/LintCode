/*

requirements

250. Special Palindrome String

You have a list of paired ambigram letter, like a<->t, b<->y, y<->h, h<->n, m<->w, w<->w …
Given a string, return true if it is a palindrome string which letters in it can be replaced by another corresponding letters. Attentionally, nested replacement is not be allowed, which means a<-->b, b<-->c, but a<-/->c.

For example, the string "swims" is true because "w" can be replaced by "m" and the string changes to "smims" which is palindrome.
the string "hob" is also true because "h" can be replaced by "y" and "b" can be replaced to "y" too. Then the string is "yoy" which is palindrome.
However, the string "ban" is false because nested replacement is not be allowed. Even "b" can just change to "y" and "n" can just change to "h" , the new string "yah" isn't palindrome.

Example
Example 1:
Input: ambigram=["at", "by", "yh", "hn", "mw", "ww"], word="swims"
Output: true
Explanation: "w" can be replaced by "m" and the string changes to "smims" which is palindrome, so it is true.

Example 2:
Input: ambigram=["at", "by", "yh", "hn", "mw", "ww"], word="hob"
Output: true
Explanation: "h" can be replaced by "y" and "b" can be replaced to "y" too. Then the string is "yoy" which is palindrome, so it is true.

Example 3:
Input: ambigram=["at", "by", "yh", "hn", "mw", "ww"], word="ban"
Output: false
Explanation: Nested replacement is not be allowed. Even "b" can just change to "y" and "n" can just change to "h" , the new string "yah" isn't palindrome.

Notice
Each digit of list ambigram is 2 letters, indicating that it can be converted from one to the other.
The length of list ambigram does not exceed 10,000
The length of the string word does not exceed 1,000
All data are guaranteed to be lowercase.
*/

class Solution {
public:
    /**
     * @param ambigram: A list of paired ambigram letter.
     * @param word: A string need to be judged.
     * @return: If it is special palindrome string, return true.
     */
    bool ispalindrome(vector<string>& ambigram, string& word) {
        // write your code here.
        int m = word.length();
        if (!m) return true;
        int id = 26;
        vector<bool> buffer(26, false);
        vector<vector<bool>> index(26, buffer);
        stack<char> s;
        for (int i = 0; i < ambigram.size(); ++i)
        {
            // is can replace each other
            int a = ambigram[i][0] - 97;
            int b = ambigram[i][1] - 97;
            index[a][b] = true; index[b][a] = true;
        }
        for (int i = 0; i < m / 2; ++i)
        {
            s.push(word[i]);
        }
        for (int i = m / 2 + m % 2; i < m; ++i)
        {
            if (isCanMerge(index, s.top(), word[i]))
                s.pop();
            else return false;
        }
        return s.empty();
    }
private:
    bool isCanMerge(const vector<vector<bool>>& index, const char& a, const char& b)
    {
        int foo = a - 97;
        int bar = b - 97;
        if (foo == bar || index[foo][bar])
            return true;
        for (int i = 0; i < 26; ++i)
        {
            for (int j = 0; j < 26; ++j)
            {
                if (i == j && index[foo][i] && index[bar][j])
                    return true;
            }
        }
        return false;
    }
};