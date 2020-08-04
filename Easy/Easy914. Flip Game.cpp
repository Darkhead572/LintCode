/*

requirements

914. Flip Game
You are playing the following Flip Game with your friend: Given a string that contains only two characters: + and -, you can flip two consecutive "++" into "--", you can only flip one time. Please find all strings that can be obtained after one flip.

Write a program to find all possible states of the string after one valid move.

Example
Example1

Input:  s = "++++"
Output: 
[
  "--++",
  "+--+",
  "++--"
]
Example2

Input: s = "---+++-+++-+"
Output: 
[
	"---+++-+---+",
	"---+++---+-+",
	"---+---+++-+",
	"-----+-+++-+"
]
*/

class Solution {
public:
    /**
     * @param s: the given string
     * @return: all the possible states of the string after one valid move
     */
    vector<string> generatePossibleNextMoves(string &s) {
        // write your code here
        vector<string> res;
        for (size_t i = 0; i < s.length(); ++i)
        {
            while (i < s.length() && s[i] == '+')
            {
                if (i + 1 < s.length() && s[i + 1] == '+')
                {
                    string tmp = s;
                    tmp[i] = tmp[i + 1] = '-';
                    res.push_back(tmp);
                }
                ++i;
            }
        }
        return res;
    }
};