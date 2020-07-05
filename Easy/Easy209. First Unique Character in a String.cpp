/*

requirements

209. First Unique Character in a String
Find the first unique character in a given string. You can assume that there is at least one unique character in the string.

样例
Example 1:
	Input: "abaccdeff"
	Output:  'b'
	
	Explanation:
	There is only one 'b' and it is the first one.


Example 2:
	Input: "aabccd"
	Output:  'b'
	
	Explanation:
	'b' is the first one.
*/

class Solution {
public:
    /**
     * @param str: str: the given string
     * @return: char: the first unique character in a given string
     */
    char firstUniqChar(string &str) {
        // Write your code here
        int characters[256] = { 0 };
        for(int i = 0; i < str.length(); ++i)
        {
            ++characters[str[i]];
        }
        for(int i = 0; i < 256; ++i)
        {
            if(characters[i] == 1)
                return (char)i;
        }
        return '\0';
    }
};