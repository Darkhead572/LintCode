/*

requirements

1138. Can Place Flowers
Suppose you have a long flowerbed in which some of the pots are planted and some are not. However, flowers cannot be planted in adjacent plots - they would compete for water and both would die.

Given a flowerbed (represented as an array containing 0 and 1, where 0 means empty and 1 means not empty), and a number n, return if n new flowers can be planted in it without violating the no-adjacent-flowers rule.

Example
Example1

Input: flowerbed = [1,0,0,0,1], n = 1
Output: True
Example2

Input: flowerbed = [1,0,0,0,1], n = 2
Output: False
Notice
1.The input array won't violate no-adjacent-flowers rule.
2.The input array size is in the range of [1, 20000].
3.n is a non-negative integer which won't exceed the input array size.
*/

class Solution {
public:
    /**
     * @param flowerbed: an array
     * @param n: an Integer
     * @return: if n new flowers can be planted in it without violating the no-adjacent-flowers rule
     */
    bool canPlaceFlowers(vector<int> &flowerbed, int n) {
        // Write your code here
        int m = flowerbed.size();
        int count_1 = 0, count_2 = 0;
        for (int i = 0; i < m; ++i)
        {
            if (flowerbed[i] == 1)
            {
                ++count_1;
                if (i > 0 && flowerbed[i - 1] != 2)
                    flowerbed[i - 1] = 2, ++count_2;
                if (i + 1 < m && flowerbed[i + 1] != 2)
                    flowerbed[i + 1] = 2, ++count_2;
            }
        }
        int count_0 = m - count_2 - count_1;
        return count_0 >= 2 * n - 1;
    }
    // the other Solution
    /**
     *iterate over all the elements of the flowerbedflowerbed and find
     * out those elements which are 0(implying an empty position). For
     * every such element, we check if its both adjacent positions are
     * also empty. If so, we can plant a flower at the current position 
     * without violating the no-adjacent-flowers-rule. For the first
     * and last elements, we need not check the previous and the next
     * adjacent positions respectively.
    **/
};