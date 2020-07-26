/*

requirements

277. Word Spacing
You are given a series of word called words, and two different words wordA and wordB, please find the spacing of the closest wordA and wordB.
If no wordA or wordB in words, return -1−1.

样例
Input：
["hello","world","say","hello"]
"hello"
"world"
Output：
1
说明
In the example, the spacing between the first "hello" and the first "world" is 11,
but the spacing between the first "world" and the second "hello" is 22, the answer should be 11。

注意事项
words contains tt words, each word is of length kk, 1 \le t \le 10^41≤t≤10
​4
​​ , 1 \le k \le 201≤k≤20.
wordA and wordB are of length n, mn,m, 1 \le n, m \le 201≤n,m≤20.
The words only consist of uppercase or lowercase English character.
*/

class Solution {
public:
    /**
     * @param words: the words given.
     * @param wordA: the first word you need to find.
     * @param wordB: the second word you need to find.
     * @return: return the spacing of the closest wordA and wordB.
     */
    int wordSpacing(vector<string> &words, string &wordA, string &wordB) {
        // write your code here.
        vector<int> findA;
        vector<int> findB;
        int res = INT_MAX;
        for (int i = 0; i < words.size(); ++i)
        {
            if (words[i] == wordA)
            {
                findA.push_back(i);
            }
            if (words[i] == wordB)
            {
                findB.push_back(i);
            }
        }
        for (int i = 0; i < findA.size(); ++i)
        {
            for (int j = 0; j < findB.size(); ++j)
            {
                res = min(res, abs(findA[i] - findB[j]));
            }
        }
        if(res == INT_MAX)
            return -1;
        else
            return res;
    }
};