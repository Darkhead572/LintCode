/*

requirements

1503. Give change
A country's currency system contains 44 kinds coins, their values are 11, 44, 1616, 6464, and a kind paper money, values 10241024.
You now used a paper money values 10241024 to buy a product values N, 0 < N <= 1024N,0<N<=1024, please calculate how many coins you'll received at least, for change.

Example
Sample Input1:
amount = 1014

Sample Output1:
4

there will be 2 coins value 4, and 2 coins value 1.
Sample Input2:
amount = 1004

Sample Output2:
2

there will be 1 coin value 16, and 1 coins value 4.
*/

class Solution {
public:
    /**
     * @param amount: The amount you should pay.
     * @return: Return the minimum number of coins for change.
     */
    int giveChange(int amount) {
        // write you code here.
        int res = 0, residue = 1024 - amount;
        int coins[4] = { 64, 16, 4, 1 };
        for (size_t i = 0; i < 4; ++i)
        {
            res += residue / coins[i];
            residue %= coins[i];
        }
        return res;
    }
};