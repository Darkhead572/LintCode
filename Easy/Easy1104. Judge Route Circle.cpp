/*

reqirements

1104. Judge Route Circle
Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place finally.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L (Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example
Example 1:

Input: "UD"
Output: true
Example 2:

Input: "LL"
Output: false
*/

class Solution {
public:
    /**
     * @param moves: a sequence of its moves
     * @return: if this robot makes a circle
     */
    bool judgeCircle(string &moves) {
        // Write your code here
        int hashMap[2] = { 0, 0 };
        for (size_t i = 0; i < moves.length(); ++i)
        {
            if (moves[i] == 'U') ++hashMap[0];
            if (moves[i] == 'D') --hashMap[0];
            if (moves[i] == 'L') ++hashMap[1];
            if (moves[i] == 'R') --hashMap[1];
        }
        return !hashMap[0] && !hashMap[1];
    }
};