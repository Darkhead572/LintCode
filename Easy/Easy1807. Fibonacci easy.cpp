/*

requirements

1807. Fibonacci easy
Find the Nth number in Fibonacci sequence.

A Fibonacci sequence is defined as follow:

The first two numbers are 0 and 1.
The i th number is the sum of i-1 th number and i-2 th number.
The first ten numbers in Fibonacci sequence is:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ...

Example
Example 1:
	Input:  1
	Output: 0
	
	Explanation: 
	return the first number in  Fibonacci sequence .

Example 2:
	Input:  2
	Output: 1
	
	Explanation: 
	return the second number in  Fibonacci sequence .

Notice
N <= 20


*/

class Solution {
public:
    /**
     * @param n: an integer
     * @return: an ineger f(n)
     */
    int fibonacci(int n) {
        // write your code here
        if (n == 1) return 0;
        if (n == 2) return 1;
        int pre = 0, now = 1;
        while (n-- > 2)
        {
            int tmp = pre;
            pre = now;
            now = tmp + pre;
        }
        return now;
    }
};