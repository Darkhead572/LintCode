/*

requirements

397. Longest Continuous Increasing Subsequence
Give an integer array，find the longest increasing continuous subsequence in this array.

An increasing continuous subsequence:

Can be from right to left or from left to right.
Indices of the integers in the subsequence should be continuous.
Example
Example 1:

Input: [5, 4, 2, 1, 3]
Output: 4
Explanation:
For [5, 4, 2, 1, 3], the LICS  is [5, 4, 2, 1], return 4.
Example 2:

Input: [5, 1, 2, 3, 4]
Output: 4
Explanation:
For [5, 1, 2, 3, 4], the LICS  is [1, 2, 3, 4], return 4.
Challenge
O(n) time and O(1) extra space.
*/

class Solution {
public:
    /**
     * @param A: An array of Integer
     * @return: an integer
     */
    int longestIncreasingContinuousSubsequence(vector<int> &A) {
        // write your code here
        int n = A.size();
        if (n == 0) return 0;
        int ans = 1;
        int count = 1;
        for(int i = 1; i < n; i++)
        {
            if(A[i] > A[i - 1])
            {
                ++count;
                ans = max(count, ans);
            }
            else count = 1;
        }
        return ans;
    }
};