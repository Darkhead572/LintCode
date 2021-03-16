/*
1013. Unique Morse Code Words
International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows: "a" maps to ".-", "b" maps to "-...", "c" maps to "-.-.", and so on.

For convenience, the full table for the 26 letters of the English alphabet is given below:

[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
Now, given a list of words, each word can be written as a concatenation of the Morse code of each letter. For example, "cab" can be written as "-.-.-....-", (which is the concatenation "-.-." + "-..." + ".-"). We'll call such a concatenation, the transformation of a word.

Return the number of different transformations among all words we have.

Example
Example 1:

Input: words = ["gin", "zen", "gig", "msg"]
Output: 2
Explanation: 
The transformation of each word is:
"gin" -> "--...-."
"zen" -> "--...-."
"gig" -> "--...--."
"msg" -> "--...--."

There are 2 different transformations, "--...-." and "--...--.".
Example 2:

Input: words = ["a", "b"]
Output: 2
Explanation: 
The transformation of each word is:
"a" -> ".-"
"b" -> "-..."
There are 2 different transformations, ".-" and "-...".
Notice
The length of words will be at most 100.
Each words[i] will have length in range [1, 12].
words[i] will only consist of lowercase letters.
*/

/*
1013. 独特的摩尔斯编码
摩尔斯电码定义了一种标准编码，把每个字母映射到一系列点和短划线，例如：a -> .-，b -> -...，c ->-.-.。

给出26个字母的完整编码表格：

[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
现在给定一个单词列表，每个单词中每个字母可以写成摩尔斯编码。 例如，cab可以写成-.-.-....-，（把c,a,b的莫尔斯编码串接起来）。 我们称之为一个词的转换。

返回所有单词中不同变换的数量。

Example
样例1：

输入: words = ["gin", "zen", "gig", "msg"]
输出: 2
解释: 
每一个单词的变换是:
"gin" -> "--...-."
"zen" -> "--...-."
"gig" -> "--...--."
"msg" -> "--...--."

这里有两种不同的变换结果： "--...-."和"--...--.".
样例2：

输入: words = ["a", "b"]
输出: 2
解释: 
每一个单词的变换是:
"a" -> ".-"
"b" -> "-..."
这里有两种不同的变换结果：".-" and "-...".
Notice
words的长度最多为100.
每一个words[i]的长度范围为[1, 12].
words[i]仅仅包含小写字母.
*/

class Solution {
private:
    unordered_map<char, string> table;
public:
    Solution() {
        string morses[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", 
                           "....", "..", ".---", "-.-", ".-..", "--", "-.", 
                           "---", ".--.", "--.-", ".-.", "...", "-", "..-", 
                           "...-", ".--", "-..-", "-.--", "--.."};
        for (char c = 'a'; c <= 'z'; ++c)
            table[c] = morses[c - 'a'];
    }
    /**
     * @param words: the given list of words
     * @return: the number of different transformations among all words we have
     */
    string string2morse(const string& str)
    {
        string result;
        for (int i = 0; i < str.size(); ++i)
            result += table[str[i]];
        return result;
    }
    int uniqueMorseRepresentations(vector<string> &words) {
        // Write your code here
        unordered_set<string> s;
        for (int i = 0; i < words.size(); ++i)
        {
            auto tmp = string2morse(words[i]);
            if (!s.count(tmp))
                s.insert(tmp);
        }
        return s.size();
    }
};