/*

requirements
133. Longest Word
中文English
Given a dictionary, find all of the longest words in the dictionary.

Example
Example 1:
	Input: {
		"dog",
		"google",
		"facebook",
		"internationalization",
		"blabla"
		}
	Output: ["internationalization"]


Example 2:
	Input:  {
		"like",
		"love",
		"hate",
		"yes"		
		}
	Output: ["like", "love", "hate"]
	

Challenge
It's easy to solve it in two passes, can you do it in one pass?

*/

//challenge:do it in one pass
class Solution {
public:
    /*
     * @param dictionary: an array of strings
     * @return: an arraylist of strings
     */
    vector<string> longestWords(vector<string> &dictionary) {
        // write your code here
        vector<string> res;
        int max = 0;
        int m = dictionary.size();
        for(string elem: dictionary)
        {
            if(elem.length() > max)
            {
                max = elem.length();
                res.clear();
                res.push_back(elem);    
            }
            else if(elem.length() == max)
            {
                res.push_back(elem);
            }
            else continue;
        }
        return res;
    }
};