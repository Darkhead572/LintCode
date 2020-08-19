/*

requirements

1343. Sum of Two Strings
Given you two strings which are only contain digit character. you should return the sum of each digit as string

Example
Example1:
Input:
A = "99"
B = "111"
Output: "11010"
Explanation: because 9 + 1 = 10, 9 + 1 = 10, 0 + 1 = 1,connect them，so answer is "11010"
Example2:
Input:
A = "2"
B = "321"
Output: "323"
Explanation: because 2 + 1 = 3, 2 + 0 = 2, 3 + 0 = 3, connect them，so answer is "323"
Notice
A and B are strings which are composed of numbers
*/

class Solution {
public:
    /**
     * @param A: a string
     * @param B: a string
     * @return: return the sum of two strings
     */
    string SumofTwoStrings(string &A, string &B) {
        // write your code here
        int op1 = 0, op2 = 0;
        string res;
        size_t m = A.length();
        size_t n = B.length();
        for (size_t i = 0; i < max(m, n); ++i)
        {
            if (i < m) op1 = A[m - i - 1] - 48;
            else op1 = 0;
            if (i < n) op2 = B[n - i - 1] - 48;
            else op2 = 0;
            res = to_string(op1 + op2) + res;
        }
        return res;
    }
};