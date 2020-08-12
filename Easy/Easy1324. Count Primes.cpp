/*

requirements

1324. Count Primes
Count the number of prime numbers less than a non-negative number, n.

Example
Example 1：

Input: n = 2
Output: 0
Example 2：

Input: n = 4
Output: 2
Explanation：2, 3 are prime number
*/

class Solution {
public:
    /**
     * @param n: a integer
     * @return: return a integer
     */
    int countPrimes(int n) {
        // write your code here
        if (n <= 1)
            return 0;
        
        int res = 0;
        bool notPrime[n];
        for (int i = 0; i < n; ++i)
            notPrime[i] = false;
        
        for (int i = 2; i < n; ++i)
        {
            if (notPrime[i] == false)
            {
                ++res;
                for (int j = 2; i * j < n; ++j)
                    notPrime[i * j] = true;
            }
        }
        
        return res;
    }
};