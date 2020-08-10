/*

requirements

988. Arranging Coins
You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.

Given n, find the total number of full staircase rows that can be formed.

n is a non-negative integer and fits within the range of a 32-bit signed integer.

Example
Example 1:

input:n = 5
output:2
Explanation:
The coins can form the following rows:
¤
¤ ¤
¤ ¤
Because the 3rd row is incomplete, we return 2.
Example 2:

input:n = 8
output:3
Explanation:
The coins can form the following rows:
¤
¤ ¤
¤ ¤ ¤
¤ ¤
Because the 4th row is incomplete, we return 3.
*/

class Solution {
public:
    /**
     * @param n: a non-negative integer
     * @return: the total number of full staircase rows that can be formed
     */
    int arrangeCoins(int n) {
        // Write your code here
        int cnt = -1, sum = 0;
        for (int i = 1; sum <= n; ++i)
            sum += i, ++cnt;
        return cnt;
    }
};