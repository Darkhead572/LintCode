/*

requirements

1385. Lucky Number Eight
8 is the lucky number of Xiaojiu. Xiaojiu wants to know how many numbers in the numbers 1~n contain 8.

Example
Example1

Input:  n = 20
Output: 2
Explanation:
Only 8,18 contains 8.
Example2

Input:  n = 100
Output: 19
Explanation:
8,18,28,38,48,58,68,78,80,81,82,83,84,85,86,87,88,89,98 contains 8.
Notice
1 <= n <= 1000000
*/

class Solution {
public:
    /**
     * @param n: count lucky numbers from 1 ~ n
     * @return: the numbers of lucky number
     */
    bool isContain_8(int n)
    {
        while(n)
        {
            if (n % 10 == 8)
                return true;
            n /= 10;
        }
        return false;
    }
    int luckyNumber(int n) {
        // Write your code here
        int res = 0;
        for (int i = 1; i < n; ++i)
            if (isContain_8(i)) ++res;
        return res;
    }
};