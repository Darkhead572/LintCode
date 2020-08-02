/*

requirements

730. Sum of All Subsets
Given a number n, we need to find the sum of all the elements from all possible subsets of a set formed by first n natural numbers.

Example
Example 1:

Input : n = 2
Output : 6
Explanation : 
Possible subsets are {{1}, {2}, {1, 2}}. Sum of elements in subsets
is 1 + 2 + 1 + 2 = 6
Example 2:

Input : n = 3
Output : 24
Explanation : 
Possible subsets are {{1}, {2}, {3}, {1, 2}, {1, 3}, {2, 3}, {1, 2, 3}}
Sum of subsets is : 
1 + 2 + 3 + (1 + 2) + (1 + 3) + 
(2 + 3) + (1 + 2 + 3) = 24
*/

class Solution {
public:
    /**
     * @param n: the given number
     * @return: Sum of elements in subsets
     */
    int subSum(int n) {
        // write your code here
        int sum = 0, times = (int)pow(2, n - 1);
        for (int i = 1; i <= n; sum += i * times, ++i);
        return sum;
    }
};