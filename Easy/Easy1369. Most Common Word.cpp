/*
1369. Most Common Word
Given a paragraph and a list of banned words, return the most frequent word that is not in the list of banned words. It is guaranteed there is at least one word that isn't banned, and that the answer is unique.

Words in the list of banned word1369. Most Common Words are given in lowercase, and free of punctuation. Words in the paragraph are not case sensitive. The answer is in lowercase.

Example
Example1

Input:  paragraph = "Bob hit a ball, the hit BALL flew far after it was hit." and banned = ["hit"]
Output: "ball"
Explanation:
"hit" occurs 3 times, but it is a banned word.
"ball" occurs twice (and no other word does), so it is the most frequent non-banned word in the paragraph. 
Note that words in the paragraph are not case sensitive,
that punctuation is ignored (even if adjacent to words, such as "ball,"), 
and that "hit" isn't the answer even though it occurs more because it is banned.
Example2

Input:  paragraph = "a a a b b c c d" and banned = ["a","b"]
Output: "c"
Explanation:
"a" and "b" are banned words
"c" occurs 2 times and "d" occurs only once
So output "c"
Notice
1 <= paragraph.length <= 1000.
1 <= banned.length <= 100.
1 <= banned[i].length <= 10.
The answer is unique, and written in lowercase (for example: word "library", you need to return "library")
paragraph only consists of letters, spaces, or the punctuation symbols !?',;.
Different words in paragraph are always separated by a space.
There are no hyphens or hyphenated words.
Words only consist of letters, never apostrophes or other punctuation symbols.

*/

/*
1369. 最频繁单词
给定一个段落和一组限定词，返回最频繁的非限定单词。已知至少有一个单词是非限定的，并且答案唯一。
限定词都是以小写字母给出，段落中的单词大小写不敏感。结果请返回小写字母。

Example
样例1

输入: paragraph = "Bob hit a ball, the hit BALL flew far after it was hit." 和 banned = ["hit"]
输出: "ball"
解释:
"hit" 出现3次但是限定词。
"ball" 出现两次，是最频繁的非限定词。
注意段落中大小写不敏感。
标点符号请忽略 (即使紧挨单词，例如"ball,"), 
样例2

输入: paragraph = "a a a b b c c d" 和 banned = ["a","b"]
输出: "c"
解释:
"a"和"b"都是限定词
"c"出现了2次，而"d"只出现过一次
所以输出"c"
Notice
1 <= paragraph.length <= 1000.
1 <= banned.length <= 100.
1 <= banned[i].length <= 10.
答案唯一，并且返回小写(例如：单词"Library"，您需要返回 "library" )
段落仅由字母、空格、标点!?',;.组成。
不同的单词会被空格隔开.
没有连字符或者连字单词.
单词仅由小写字母组成，没有所有格或别的标点符号。

*/

class Solution {
private:
    string to_lower(string str)
    {
        for (int i = 0; i < str.size(); ++i)
            str[i] = tolower(str[i]);
        return str;
    }
public:
    /**
     * @param paragraph: 
     * @param banned: 
     * @return: nothing
     */
    string mostCommonWord(string &paragraph, vector<string> &banned) {
        unordered_set<string> banned_set;
        for (int i = 0; i < banned.size(); ++i)
        {
            auto str = to_lower(banned[i]);
            if (!banned_set.count(str))
                banned_set.insert(str);
        }
        unordered_map<string, int> table;

        int i = 0;
        while (i < paragraph.size())
        {
            if (isalpha(paragraph[i]))
            {
                string word;
                while (isalpha(paragraph[i]))
                    word += paragraph[i++];
                word = to_lower(word);
                if (!banned_set.count(word))
                {
                    if (table.count(word))
                        ++table[word];
                    else table[word] = 1;
                }
                else {
                    ++i; continue;
                }
            }
            else {
                ++i; continue;
            }
        }
        
        int maximum = INT_MIN;
        string result;
        for (auto elem: table)
        {
            if (maximum < elem.second)
                result = elem.first, maximum = elem.second;
        }
        return result;
    }
};