/*

requirements

671. Rotate Words
The words are same rotate words if rotate the word to the right by loop, and get another. Count how many different rotate word sets in dictionary.

E.g. picture and turepic are same rotate words.

Example
Example 1:

Input : ["picture", "turepic", "icturep", "word", "ordw", "lint"]
Output : 3
Explanation : 
"picture", "turepic", "icturep" are same ratote words.
"word", "ordw" are same too.
"lint" is the third word that different from the previous two words.
Notice
All words are lowercase.
*/

class Solution {
public:
    /*
     * @param words: A list of words
     * @return: Return how many different rotate words
     */
    int countRotateWords(vector<string> words) {
        // Write your code here
        set<string> dict;
        for(auto word : words)
        {
            string str = word + word;
            for (int i = 0; i < word.size(); ++i)
                dict.erase(str.substr(i, word.size()));
            dict.insert(word);
        }
        return dict.size();
    }
};