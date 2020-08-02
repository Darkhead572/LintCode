/*

requirements

1735. Super Palindromes
Let's say a positive integer is a superpalindrome if it is a palindrome, and it is also the square of a palindrome.

Now, given two positive integers L and R (represented as strings), return the number of superpalindromes in the inclusive range [L, R].

Example
Example 1:

Input: L = "4", R = "1000"
Output: 4
Explanation: 4, 9, 121, and 484 are superpalindromes.
Note that 676 is not a superpalindrome: 26 * 26 = 676, but 26 is not a palindrome.
Example 2:

Input： L = "1", R = "2"
Output：1
Explanation：1 is superpalindrome.
Notice
1 <= len(L) <= 18
1 <= len(R) <= 18
L and R are strings representing integers in the range [1, 10^18).
int(L) <= int(R)
*/

class Solution {
public:
	/**
	 * @param L: a string
	 * @param R: a string
	 * @return: the number of superpalindromes
	 */
	bool isPalindrome(long long number)
	{
		if (number >= 0 && number < 10)
			return true;
		string tmp = to_string(number);
		for (size_t i = 0; i < tmp.length() / 2; ++i)
			if (tmp[i] != tmp[tmp.length() - i - 1])
				return false;
		return true;
	}
	int superpalindromesInRange(string& L, string& R) {
		// Write your code here
		long long i, j;
		int res = 0;
		long long start = (long long)(ceil(sqrt(stoll(L, 0, 10))));
		long long end = (long long)(sqrt(stoll(R, 0, 10)));
		for (i = 1; i <= 9; i++)
		{
			if (i >= start && i <= end && isPalindrome(i * i))
				++res;
		}
		for (i = (long long)(sqrt(start) / 10); i < sqrt(end) * 10; i++)
		{
			string s = to_string(i);
			int k = s.size();
			string s2 = s;
			reverse(s2.begin(), s2.end());
			j = stoll(s + s2, 0, 10);
			if (j >= start && j <= end && isPalindrome(j * j))
				++res;
			if (k > 1)
			{
				s.pop_back();
				j = stoll(s + s2, 0, 10);
				if (j >= start && j <= end && isPalindrome(j * j))
					++res;
			}
		}
		return res;
	}
};