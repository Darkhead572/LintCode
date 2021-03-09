/*
298. Find prime
Output all prime numbers within n.

Example
Example 1:

Input：5
Output：[2, 3, 5]
Notice
We promise that n is an integer within 100.
*/

/*
298. 寻找素数
输出n以内所有的素数。

Example
样例 1:

输入：5
输出：[2, 3, 5]
Notice
保证 n 是100以内的整数。
*/

class Solution {
public:
    /**
     * @param n: an integer
     * @return: return all prime numbers within n.
     */
    bool isPrime(int n) {
        if (n <= 1)
            return false;
        for (int i = 2; i <= int(sqrt(n)); ++i)
            if (n % i == 0)
                return false;
        return true;
    }
    vector<int> prime(int n) {
        // write your code here
        vector<int> result;
        for (int i = 1; i <= n; ++i)
            if (isPrime(i))
                result.emplace_back(i);
        return result;
    }
};