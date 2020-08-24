/*

requirements

1835. Number of Ways to Stay in the Same Place After Some Steps I
You have a pointer at index 00 in an array of size arrLenarrLen. At each step, you can move 11 position to the left, 11 position to the right in the array or stay in the same place (The pointer should not be placed outside the array at any time).

Given two integers stepssteps and arrLenarrLen, return the number of ways such that your pointer still at index 00 after exactly stepssteps steps.

Since the answer may be too large, return it modulo 10^9 + 710
​9
​​ +7.

Example
Example 1:

Input: 
3
2
Output: 4
Explanation: There are 4 differents ways to stay at index 0 after 3 steps.
Right, Left, Stay
Stay, Right, Left
Right, Stay, Left
Stay, Stay, Stay
Example 2:

Input: 
2
4
Output: 2
Explanation: There are 2 differents ways to stay at index 0 after 2 steps
Right, Left
Stay, Stay
Example 3:

Input: 
4
2
Output: 8
Notice
1 \leq steps \leq 151≤steps≤15
1 \leq arrLen \leq 10^61≤arrLen≤10
​6
​​
*/

class Solution {
public:
    /**
     * @param steps: steps you can move
     * @param arrLen: the length of the array
     * @return: Number of Ways to Stay in the Same Place After Some Steps
     */
    int numWays(int steps, int arrLen) {
        // write your code here
        return dfs(steps, 0, arrLen);
    }
    int dfs(int steps, int pos, int arrLen)
    {
        if (pos >= arrLen || pos < 0 || steps < pos)
            return 0;
        if (steps == pos)
            return 1;
        int stay = dfs(steps - 1, pos, arrLen);
        int left = dfs(steps - 1, pos - 1, arrLen);
        int right = dfs(steps - 1, pos + 1, arrLen);
        return stay + left + right;
    }
};