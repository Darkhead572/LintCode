/*

365. Count 1 in Binary

Count how many 1 in binary representation of a 32-bit integer.

样例
Example 1:

Input: 32
Output: 1
Explanation:
32(100000), return 1.
Example 2:

Input: 5
Output: 2
Explanation:
5(101), return 2.
挑战
If the integer is n bits with m 1 bits. Can you do it in O(m) time?
*/

class Solution {
public:
    /*
     * @param num: An integer
     * @return: An integer
     */
    int countOnes(int num) {
        // write your code here
        // challenge
        int count = 0;
        while(num)
        {
            ++count;
            num &= (num - 1);
        }
        return count;
    }
};