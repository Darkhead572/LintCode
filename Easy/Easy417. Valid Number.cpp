/*

requirements

417. Valid Number
Validate if a given string is numeric.

Example
Example 1:

Input: "0"
Output: true
Explanation: "0" can be converted to 0
Example 2:

Input: "0.1"
Output: true
Explanation: "0.1" can be converted to 0.1
Example 3:

Input: "abc"
Output: false
Example 4:

Input: "1 a"
Output: false
Example 5:

Input: "2e10"
Output: true
Explanation: "2e10" represents 20,000,000,000

*/

class Solution {
public:
    /**
     * @param s: the string that represents a number
     * @return: whether the string is a valid number
     */
	int make(char c) {
        switch(c) {
            case ' ': return 0;
            case '+':
            case '-': return 1;
            case '.': return 3;
            case 'e': return 4;
            default:
            if(c >= 48 && c <= 57)
                return 2;
        }
        return -1;
    }
    bool isNumber(string s) {
        int state = 0;
        int finals = 360; //101101000
        vector<vector<int>> transfer = { { 0, 1, 6, 2,-1},
                                       {-1,-1, 6, 2,-1},
                                       {-1,-1, 3,-1,-1},
                                       { 8,-1, 3,-1, 4},
                                       {-1, 7, 5,-1,-1},
                                       { 8,-1, 5,-1,-1},
                                       { 8,-1, 6, 3, 4},
                                       {-1,-1, 5,-1,-1},
                                       { 8,-1,-1,-1,-1} };
        for(size_t i = 0; i < s.length(); ++i)
        {
            int id = make(s[i]);
            if (id < 0) return false;
            state = transfer[state][id];
            if (state < 0) return false;
        }
        return (finals & (1 << state)) > 0;
    }
};