/*

requirements

936. Capitalizes The First Letter
Given a sentence of English, update the first letter of each word to uppercase.

Example
Example1

Input: s =  "i want to get an accepted"
Output: "I Want To Get An Accepted"
Example2

Input: s =  "i jidls    mdijf  i  lsidj  i p l   "
Output: "I Jidls    Mdijf  I  Lsidj  I P L   "
Notice
The given sentence may not be a grammatical sentence.
The length of the sentence does not exceed 100.
*/

class Solution {
public:
    /**
     * @param s: a string
     * @return: a string after capitalizes the first letter
     */
    string capitalizesFirst(string& s) {
        // Write your code here
        size_t i = 0, m = s.length();
        string res(s);
        while (i < m)
        {
            if (isalpha(res[i]))
            {
                // lower to upper
                if (islower(res[i]))
                    res[i] -= 32;
                // skip all alphabets
                while (i < m && isalpha(res[i]))
                    ++i;
                // now s[i] is a space
                // skip all spaces
                while (i < m && isspace(res[i]))
                    ++i;
                // now s[i] is a alphabet
            }
            else ++i;
        }
        return res;
    }
};