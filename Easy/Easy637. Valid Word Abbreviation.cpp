/*

requirements

637. Valid Word Abbreviation
Given a non-empty string word and an abbreviation abbr, return whether the string matches with the given abbreviation.

A string such as "word" contains only the following valid abbreviations:

["word", "1ord", "w1rd", "wo1d", "wor1", "2rd", "w2d", "wo2", "1o1d", "1or1", "w1r1", "1o2", "2r1", "3d", "w3", "4"]
Example
Example 1:

Input : s = "internationalization", abbr = "i12iz4n"
Output : true
Example 2:

Input : s = "apple", abbr = "a2e"
Output : false
Notice
Notice that only the above abbreviations are valid abbreviations of the string word. Any other string is not a valid abbreviation of word.
*/

class Solution {
public:
    /**
     * @param word: a non-empty string
     * @param abbr: an abbreviation
     * @return: true if string matches with the given abbr or false
     */
    bool validWordAbbreviation(string& word, string& abbr) {
        // write your code here
        size_t m = word.length();
        size_t n = abbr.length();
        size_t i = 0, j = 0;
        while (j < n)
        {
            if (isdigit(abbr[j]))
            {
                string number;
                while (j < n && isdigit(abbr[j]))
                    number += abbr[j++];
                if (number[0] == '0') return false;
                int tmp = stoi(number);
                i += tmp;
            }
            else if (word[i] == abbr[j])
                ++i, ++j;
            else return false;
        }
        return (i == m) && (j == n);
    }
};