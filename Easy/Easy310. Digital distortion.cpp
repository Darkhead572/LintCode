/*

requirements

310. Digital distortion
Given an integer A.
Integer B is distortion of A with its digits interleaved by taking the first rightmost digit of A as the first digit,
the leftmost digit of A as the second digit, the second rightmost digit as the third digit and so on for all the digits in A.

Example
input: "12345678"
output:"81726354"
Notice
0<=A<=1e200
*/

class Solution {
public:
    /**
     * @param A: the integer discrible in problem
     * @return: the integer after distortion
     */
    string Distortion(string &A) {
        if (A.empty()) return A;
        size_t m = A.length();
        string B(m, '0');
        bool tag = false;
        for (size_t i = 0, j = 0; i < m; ++i)
        {
            if (tag)
                B[i] = A[j];
            else
                B[i] = A[m - j - 1];
            j += i % 2;
            tag = !tag;
        }
        return B;
    }
};