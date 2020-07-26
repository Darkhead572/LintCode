/*

requirements

792. Kth Prime Number
Given the prime number n, output the number of prime numbers

Example
Example1

Input: n = 3
Output: 2
Explanation:
[2,3,5], 3 is the second prime number.
Example2

Input: n = 11
Output: 5
Explanation:
[2,3,5,7,11], 11 is the fifth prime number.
Notice
n <= 100000
The prime number is defined as a natural number greater than 1, and there are no other factors except 1 and it itself.
*/

class Solution {
public:
    /**
     * @param n: the number
     * @return: the rank of the number
     */
    int kthPrime(int n) {
        // write your code here
        if (1 == n) return 0;
		int count = n;
		bool *flag = new bool[n + 1];
		for (int i = 0; i < n + 1; ++i)
		    flag[i] = true;
		for (int i = 2; i <= sqrt(n); ++i)
		{
			for (int j = i * i; j <= n; j += i)
			{
				if (true == flag[j])
				{
					flag[j] = false;
					--count;
				}
			}
		}
		delete flag;
		flag = nullptr;
		return count - 1;
    }
};