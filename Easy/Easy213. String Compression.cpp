/*

requirements

213. String Compression
Implement a method to perform basic string compression using the counts of repeated characters. For example, the string aabcccccaaa would become a2b1c5a3.

If the "compressed" string would not become smaller than the original string, your method should return the original string.

You can assume the string has only upper and lower case letters (a-z).

样例
Example 1:

Input: str = "aabcccccaaa"
Output: "a2b1c5a3"
Example 2:

Input: str = "aabbcc"
Output: "aabbcc"
*/

class Solution {
public:
    /**
     * @param originalString: a string
     * @return: a compressed string
     */
    string compress(string &originalString) {
        // write your code here
        if(originalString.empty())
            return string();
        string res; char lastChar = originalString[0];
        int cnt = 0;
        for(int i = 0; i < originalString.length(); ++i)
        {
            if(lastChar == originalString[i])
                ++cnt;
            else
            {
                res += lastChar;
                res += to_string(cnt);
                cnt = 1;
            }
            lastChar = originalString[i];
        }
        res += lastChar;
        res += to_string(cnt);
        cnt = 1;
        if(res.length() < originalString.length())
            return res;
        else
            return originalString;
    }
};